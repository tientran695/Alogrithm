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
	Try(1);
	if(m > cnt)
		cout << -1;
	return 0;
}
