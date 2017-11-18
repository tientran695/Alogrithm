#include <bits/stdc++.h>
using namespace std;
#define MAXN 35
#define INF 1000000000;
int avail[MAXN][MAXN] = {};
int conflict[MAXN][MAXN] = {};
int m, n;
int w[MAXN][MAXN] = {};
int fopt = INF;

void input()
{
  cin >> m >> n;
  //Doc nhung mon day dc
  for(int i = 1; i <= m; i++)
  {
    cin >> avail[i][0];
    for(int j = 1; j <= avail[i][0]; j++)
      cin >> avail[i][j];
  }
  int conflictCnt, u, v;
  cin >> conflictCnt;
  for(int i = 1; i <= conflictCnt; i++){
    cin >> u >> v;
    conflict[u][v] = conflict[v][u] = 1;
  }
}

int maxLoad()
{
  //tim max w10, w20, ... wm0
  int maxL = w[1][0];
  for(int i = 2; i <= m; i++)
    maxL = max(maxL, w[i][0]);
  return maxL;
}

bool check(int y, int j)
{
  if(!avail[y][j]) return false;
  for(int k = 1; k <= w[y][0]; k++){
    if(conflict[w[y][k]][j]) return false;
  }
  return true;
}
void TRY(int j)
{
  //tim thay y co the day mon j
  for(int y = 1; y <= m; y++)
  {
    if(check(y, j)){
      w[y][0]++;
      w[y][w[y][0]] = j;
      if(j == n){
        cout << "die";
        if(maxLoad() < fopt)
          fopt = maxLoad();
      }else TRY(j + 1);
      w[y][w[y][0]] = 0;
      w[y][0]--;
    }
  }
}

int main()
{
  freopen("input.inp", "r", stdin);
  input();
  TRY(2);
  return 0;
}
