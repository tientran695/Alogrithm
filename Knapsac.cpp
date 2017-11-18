#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
#define MAX 50
int n, b;
int a[MAX], c[MAX]; //mang dau vao
double x[MAX]; //luu loi giai
double fopt, fcur; //gia tri f max
double bk; //trong luong con lai cua tui
vector <pair<int, int> > data;

int partition(double a[], int L, int R, int pivotIndx)
{
	double pivot = a[pivotIndx];
	int storeIndx = L;
	swap(a[pivotIndx], a[R]);
	//Dich chuyen cac phan tu nho hon pivot ve dau day
	for (int i = L; i <= R - 1; i++)
	{
		if (a[i] < pivot)
		{
			swap(a[i], a[storeIndx]);
			storeIndx++;
		}
	}
	swap(a[R], a[storeIndx]);
	return storeIndx;
}

void quickSort(double a[], int L, int R)
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

void Input()
{
	cin >> n >> b;
	for (int j = 1; j <= n; j++)
	{
		cin >> a[j] >> c[j];
		data.push_back(make_pair(a[j], c[j]));
	}
}

bool compare(const pair<int, int> &x, const pair<int, int> &y)
{
	return x.second * 1.0 / x.first > y.second * 1.0 / y.first;
}

void sortData()
{
	std::sort(data.begin(), data.end(), compare);
	for (int i = 0; i < n; i++)
	{
		a[i + 1] = data[i].first;
		c[i + 1] = data[i].second;
		//cout << a[i + 1] << " " << c[i + 1] << endl;
	}
}

void quickSortData()
{
	double temp[MAX];
	for (int i = 1; i <= n; i++)
	{
		temp[i] = data[i].second / data[i].first;
	}
}

void TRY(int k)
{
	int t = bk >= a[k] ? 1 : 0;
	for (int y = 0; y <= t; y++)
	{
		x[k] = y;
		fcur += y * c[k];
		bk -= y * a[k];
		if (k == n)
		{
			if (fcur > fopt)
				fopt = fcur;
		}
		else
		{
			if (fcur + bk * c[k + 1] * 1.0 / a[k + 1] > fopt)
				TRY(k + 1);
		}
		bk += y * a[k];
		fcur -= y * c[k];
	}
}

int main()
{
	//freopen("Knapsac.inp", "r", stdin);
	Input();
	sortData();
	fopt = -1;
	fcur = 0;
	bk = b;
	TRY(1);
	cout << fopt;
	return 0;
}
