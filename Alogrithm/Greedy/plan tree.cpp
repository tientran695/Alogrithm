#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int t[MAX];
int n;
int ans;
int main()
{
  freopen("input.inp", "r", stdin);
  cin >> n;
  for(int i = 0; i < n; i++)
    scanf("%d", &t[i]);
  sort(t, t + n, greater<int>());
  ans = t[0] + 2;
  for(int i = 1; i < n; i++)
    ans = max(ans, t[i] + i + 1);
  cout << ans;
  return 0;
}
