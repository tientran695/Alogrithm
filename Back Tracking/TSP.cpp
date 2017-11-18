#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 50
#define INF 1000000000
int n, m;
int c[MAX][MAX];
int x[MAX]; //mang luu loi giai
int mark[MAX]; //mang danh dau cac tp da ghe tham
int fopt = INF;//gan gia tri dau cho loi giai
int cmin = INF;
int f = 0;

void Input()
{
	cin >> n;
	cin >> m;
	for (int j = 1; j <= m; j++)
	{
		int x, y;
		cin >> x >> y;
		cin >> c[x][y];
		cmin = min(cmin, c[x][y]);
	}
}

void TRY(int k)
{
	for (int v = 1; v <= n; v++)
	{
		if (!mark[v] && c[x[k - 1]][k] != 0)
		{
			x[k] = v;
			f += c[x[k - 1]][k];
			mark[v] = 1;
			if (k == n){
				fopt = min(fopt, f + c[x[n]][1]);
			}
			else if (f + (n - k + 1) * cmin < fopt)
				TRY(k + 1);
			f -= c[x[k - 1]][k];
			mark[v] = 0;
		}
	}
}

int main()
{
	freopen("TSP.inp", "r", stdin);
	Input();
	x[1] = 1;
	mark[1] = 1;
	TRY(2);
	cout << fopt << endl;
	return 0;
}
