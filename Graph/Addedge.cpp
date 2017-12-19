#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
#define MAX 10005
int n, m;
int visited[MAX] = {};
int num[MAX] = {};
int low[MAX] = {};
int parent[MAX] = {};
vector<int> ds[MAX];
vector<pair<int, int> > res;
int cnt = 0;

void input()
{
	cin >> n >> m;
	int u, v;
	for (int i = 0; i < m; i++)
	{
		cin >> u >> v;
		ds[u].push_back(v);
		ds[v].push_back(u);
	}
}

void dfs(int u)
{
	visited[u] = 1;
	num[u] = cnt++;
	low[u] = num[u];
	for (int i = 0; i < ds[u].size(); i++)
	{
		int v = ds[u][i];
		if (!visited[v])
		{
			dfs(v);
			parent[v] = u;
			low[u] = min(low[u], low[v]);
			if (low[v] > num[u])
				res.push_back(make_pair(u, v));
		}
		else if (v != parent[u])
			low[u] = min(low[u], num[v]);
	}
}

int main()
{
	freopen("addedge.inp", "r", stdin);
	input();

	for (int i = 1; i <= n; i++)
	if (!visited[i])
		dfs(i);
	for (int i = 0; i < res.size(); i++)
		cout << res[i].first << " " << res[i].second << endl;
	return 0;
}