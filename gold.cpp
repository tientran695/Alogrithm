#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100005

int n, l1, l2;
int a[MAX];
int s[MAX] = {};
int su[MAX] = {};



int main()
{
	ios::sync_with_stdio(false);
	freopen("input.inp", "r", stdin);
	int res = 0;
	cin >> n >> l1 >> l2;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s[i] = a[i];
		res = max(res, a[i]);
	}
	for (int t = l1 + 1; t <= n; t++)
	{
		for (int u = t - l1; u >= t - l2 && u > 0; u--)
		{
			s[t] = max(s[t], a[t] + s[u]);
		}
		res = max(res, s[t]);
	}
	cout << res << endl;
	return 0;
}