//#include <iostream>
//#include <stdio.h>
//#include <vector>
//#include <queue>
//using namespace std;
//#define MAX 10005
//int n, m;
//vector<int> ds[MAX];//ds vao
//int visited[MAX] = {};
//int parent[MAX] = {}; //mang luu
//queue<int> q;
//int last;
//
//void input()
//{
//	cin >> n >> m;
//	int u, v;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v;
//		ds[u].push_back(v);
//		ds[v].push_back(u);
//	}
//}
//
//void bfs(int s)
//{
//	q.push(s);
//	visited[s] = 1;
//	while (!q.empty())
//	{
//		int u = q.front();
//		last = u;
//		q.pop();
//		for (int i = 0; i < ds[u].size(); i++)
//		{
//			int v = ds[u][i];
//			if (!visited[v])
//			{
//				q.push(v);
//				parent[v] = u;
//				visited[v] = 1;
//			}
//		}
//	}
//}
//
//int main()
//{
//	freopen("long_path.inp", "r", stdin);
//	input();
//	bfs(1);
//	for (int i = 0; i < n; i++){
//		visited[i] = 0;
//		parent[i] = 0;
//	}
//	bfs(last);
//	cout << last;
//	while (parent[last] != 0)
//	{
//		cout << "->" << parent[last];
//		last = parent[last];
//	}
//	return 0;
//}