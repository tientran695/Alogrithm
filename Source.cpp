#include <iostream>
using namespace std;
#define MAX 10000
int a[MAX];
int n;
int k; //so phan tu cua chuoi sinh ra
int m;
bool isContinue = true;
int cnt = 0;

void PrintSol()
{
	for (int i = 1; i <= k; i++)
	{
		cout << a[i] << " ";
	}
	//cout << endl;
}

int C(int k, int n){
	if (k == n || k == 0) return 1;
	return C(k - 1, n - 1) + C(k, n - 1);
}

void Try(int i)
{
	for (int v = a[i - 1] + 1; v <= n - k + i; v++)
	{
		a[i] = v;
		if (i == k)
		{
			cnt++;
			if (cnt == m)
			{
				isContinue = false;
				PrintSol();
			}
		}
		else if (isContinue)
			Try(i + 1);
	}
}

int main()
{
	freopen("input.inp", "r", stdin);
	cin >> n >> k >> m;
	a[0] = 0;
	if (m == 0 || m > C(k, n))
		cout << -1;
	else
		Try(1);
	return 0;
}