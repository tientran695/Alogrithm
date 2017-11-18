#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 10000
int p[MAX];
bool visited[MAX];
int n, k;
int cnt = 0;

void PrintSol()
{
	for (int i = 1; i <= n; i++)
  {
    cout << p[i] << " ";
  }
		cout << endl;
}

void Try(int i)
{
	for (int v = 1; v <= n; v++)
	{
    if(visited[v] == false)
    {
      p[i] = v;
      visited[v] = true;
      if(i == n)
      {
        cnt++;
        if(cnt == k)
        {
          PrintSol();
          exit(0);
        }
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
	//freopen("input.inp", "r", stdin);
	cin >> n >> k;
  for(int i = 1; i <= n; i++)
  {
    visited[i] = false;
  }
	Try(1);
  cout << -1;
	return 0;
}
