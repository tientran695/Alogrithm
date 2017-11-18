#include <iostream>
using namespace std;
#define MAX 35
int n, r;
int a[100][100]; //dau vao nxn
int tour;

void Input()
{
	cin >> n >> r;
	getchar();
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++){
			int x = getchar() - 48;
			getchar();
			a[i][j] = x;
		}
	}
}

int main()
{
	freopen("input.inp", "r", stdin);
	Input();
	return 0;
}
