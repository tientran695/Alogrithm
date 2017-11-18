#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 10000
int p[MAX];
int b[MAX];
bool visited[MAX];
int n, k = -10;
int cnt = 0;
int check = 0;

void PrintSol()
{
	for (int i = 1; i <= n; i++)
	{
		cout << p[i] << " ";
	}
	//cout << endl;
}

bool Fcheck()
{
	for (int i = 1; i <= n; i++){
		if (p[i] == b[i]){
			check++;
		}
	}
	if (check == n)
		return true;
	return false;
}

void Try(int i)
{
	for (int v = 1; v <= n; v++)
	{
		if (visited[v] == false)
		{
			p[i] = v;
			visited[v] = true;
			if (i == n)
			{
				cnt++;
				if (Fcheck()){
					k = cnt;
				}
				if (cnt == k + 1)
				{
					PrintSol();
					exit(0);
				}
				check = 0;
			}
			else
			{
				Try(i + 1);
			}
			visited[v] = false;
		}
	}
}
int main()
{
	freopen("input.inp", "r", stdin);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> b[i];
		visited[i] = false;
	}
	Try(1);
	cout << -1;
	return 0;
}
