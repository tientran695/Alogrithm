#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 10000
int a[MAX];
int n, k, m;
bool isContinue = true;
int cnt = 0;

void PrintSol()
{
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
}

void Try(int i)
{
	int t = 0;
	int s = 0;
	for(int j = 1; j < m; j++)
	{
		s += a[i - j];
	}
	if(i >= m && s == 0)
	{
		t = 1;
	}
	for (int v = t; v <= 1; v++)
	{
		a[i] = v;
		if (i == n)
		{
			cnt++;
			if(cnt == k)
			{
				//isContinue = false;
				PrintSol();
				exit(0);
			}
		}
		else //if (isContinue)
			Try(i + 1);
	}
}
int main()
{
	//freopen("input.inp", "r", stdin);
	cin >> n >> k >> m;
	Try(1);
	cout << -1;
	return 0;
}
