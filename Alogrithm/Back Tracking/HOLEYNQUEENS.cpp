#include <iostream>
#include <math.h>
using namespace std;
#define MAX 50
int x[MAX];
bool r[MAX];
bool d1[2 * MAX], d2[2 * MAX];
int n, m;
int cnt = 0;

void PrintSol()
{
	cnt++;
	//cout << cnt << endl;
}

void Input()
{
	//cin >> n >> m;
	for(int i = 1; i <= m; i++)
	{
		int x, y;
		cin >> x >> y;
		r[x] = false;
		d1[y - x] = false;
		d2[x + y] = false;
	}
}

bool Candidate(int v, int i)
{
  for(int j = 1; j <= i - 1; j++)
  {
    if(x[j] == v || abs(x[j] - v) == abs(j - i))
      return false;
    return true;
  }
}

void TRY(int i)
{
  for(int v = 1; v <= n; v++)
  {
		if(r[v] && d1[i - v] && d2[i + v])
		{
			x[i] = v;
			r[v] = false;
			d1[i - v] = false;
			d2[i + v] = false;
			if(i == n)
				PrintSol();
			else
				TRY(i + 1);
			r[v] = true;
			d1[i - v] = true;
			d2[i + v] = true;
		}
  }
}

int main()
{
	freopen("HOLEYNQUEENS.inp", "r", stdin);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		r[i] = true;
	for(int i = 1 - n; i <= n - 1; i++)
		d1[i] = true;
	for(int i = 2; i <= 2*n; i++)
		d2[i] = true;
	Input();
  TRY(1);
	cout << cnt;
  return 0;
}
