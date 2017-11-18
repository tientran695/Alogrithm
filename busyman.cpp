#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
#define MAX 100000
int T, N;
pair<int, int> data[MAX];

void swap(pair<int, int> &a, pair<int, int> &b)
{
	pair<int, int> temp = a;
	a = b;
	b = temp;
}

int partition(pair<int, int> a[] , int L, int R, int pivotIndx)
{
	pair<int, int> pivot = a[pivotIndx];
	int storeIndx = L;
	swap(a[pivotIndx], a[R]);
	//Dich chuyen cac phan tu nho hon pivot ve dau day
	for (int i = L; i <= R - 1; i++)
	{
		if (a[i].second < pivot.second)
		{
			swap(a[i], a[storeIndx]);
			storeIndx++;
		}
	}
	swap(a[R], a[storeIndx]);
	return storeIndx;
}

void quickSort(pair<int, int> a[] , int L, int R)
{
	if (L < R)
	{
		int indx = (L + R) / 2;
		indx = partition(a, L, R, indx);
		if (L < indx)
			quickSort(a, L, indx - 1);
		if (indx < R)
			quickSort(a, indx + 1, R);
	}
}

void sortData()
{
	int swaped;
	do
	{
		swaped = 0;
		for (int i = 1; i < N; i++)
		{
			if (data[i].second > data[i + 1].second)
			{
				swap(data[i], data[i + 1]);
				swaped = 1;
			}
		}
	} while (swaped == 1);
}

bool compare(const pair<int, int> &x, const pair<int, int> &y)
{
	return x.second < y.second;
}

int main()
{
	freopen("input.inp", "r", stdin);
	cin >> T; //so test case
	while (T--)
	{
		cin >> N;
		for (int i = 1; i <= N; i++){
			int start, end;
			cin >> start >> end;
			data[i] = make_pair(start, end);
		}

		//process
		//sort(data.begin(), data.end(), compare);
		quickSort(data, 1, N);
		//sortData();
		int index = 1;
		int ans = 1;
		for (int j = 2; j <= N; j++)
		{
			if (data[j].first >= data[index].second){
				ans++;
				index = j;
			}
		}
		cout << ans << endl;
	}
	return 0;
}