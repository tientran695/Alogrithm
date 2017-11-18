#include <bits/stdc++.h>
using namespace std;
#define MAX 35
int n, k, m;
int x[MAX]; //Mang luu loi giai
int mark[MAX] = {};
vector<int> E[MAX];
int cnt = 0;

void Input()
{
  cin >> n >> k >> m;
  int u, v;
  for(int i = 1; i <= m; i++){
    cin >> u >> v;
    E[u].push_back(v);
    E[v].push_back(u);
  }
  for(int i = 1; i <= n; i++)
    E[0].push_back(i);
}

void TRY(int j)
{
  //xet ung vien cho x[j]: x[j] thuoc E[x[j - 1]]
  for(int t = 0; t < E[x[j - 1]].size(); t++){
    int y = E[x[j - 1]][t];
    if(mark[y]) continue;
    x[j] = y;
    mark[y] = 1;
    if(j == k + 1) cnt++;
    else TRY(j + 1);
    mark[y] = 0;
  }
}

int main()
{
  freopen("k-path.inp", "r", stdin);
  Input();
  TRY(1);
  cout << cnt / 2;
  return 0;
}
