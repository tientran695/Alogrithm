//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//#define MAXN 100
//int n, m;
//vector<int> ds[MAXN];
//queue<int> q;
//int visited[MAXN] = {};
//int parent[MAXN];
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
//void bfs(int s)
//{
//	q.push(s);
//	visited[s] = 1;
//	while (!q.empty())
//	{
//		int u = q.front();
//		cout << "Discover " << u << endl;
//		q.pop();
//		for (int i = 0; i < ds[u].size(); i++)
//		{
//			int v = ds[u][i];
//			if (!visited[v])
//			{
//				q.push(v);
//				parent[v] = u;
//				cout << "Visit " << v << endl;
//				visited[v] = 1;
//			}
//		}
//	}
//}
//
//int main()
//{
//	freopen("input.inp", "r", stdin);
//	input();
//	bfs(1);
//	return 0;
//}