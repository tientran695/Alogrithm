//#include <iostream>
//#include <vector>
//using namespace std;
//#define MAX 10000
//
//int n, k, m;
//vector<pair<int, int>> ds[MAX];
//int visited[MAX] = {};
//
//void input()
//{
//	cin >> n >> k >> m;
//	int u, v, w;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v >> w;
//		ds[u].push_back(make_pair(v, w));
//		ds[v].push_back(make_pair(u, w));
//	}
//}
//
//void DFS(int u)
//{
//	visited[u] = 1;
//	cout << "Tham " << u << endl;
//	for (int i = 0; i < ds[u].size(); i++)
//	{
//		int v = ds[u][i].first;
//		if (!visited[v])
//			DFS(v);
//	}
//}
//
////d[u][i] la do dai duong di i canh ngan nhat xuat phat tu u, i = 0, 1...
////KQ = min d[u][k] = > phai tinh d[u][k] > quy hoach dong
////Cơ sở : i = 0; d[u][0] = 0
////d[u][i] = min w(u, v) + d[v][i - 1], v thuộc N(u)
//
//
//int main()
//{
//	freopen("input.inp", "r", stdin);
//	input();
//	for (int i = 0; i < ds[2].size(); i++)
//		cout << ds[2][i].first << " ";
//	return 0;
//}