#include <bits/stdc++.h>
using namespace std;
#define MAX 35
int n, r;
int a[100][100]; //dau vao nxn
int x[MAX]; //Mang luu loi giai
int mark[MAX] = {};
vector<int> E[MAX];
int cnt = 0;

//tua r có l đỉnh: x1, x2, ... xl;
//
void Input()
{
  cin >> n >> r;
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= n; j++){
      int x = getchar() - 48;
      getchar();
      a[i][j] = x;
    }
    getchar();
  }
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
  freopen("input.inp", "r", stdin);
  Input();
  return 0;
}
