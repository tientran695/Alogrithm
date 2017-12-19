//#include <iostream>
//#include <stdio.h>
//#include <vector>
//#include <queue>
//using namespace std;
//#define MAX 10005
//int n, m;
//vector<int> ds[MAX];//ds vao
//int inDeg[MAX] = {};//luu ban bac vao
//int idx[MAX] = {}; //mang luu
//queue<int> q;
//
//void input()
//{
//	cin >> n >> m;
//	int u, v;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v;
//		ds[u].push_back(v);
//		inDeg[v]++;
//	}
//}
//
//void topoSort()
//{
//	int cnt = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (inDeg[i] == 0)
//			q.push(i);
//	}
//	while (!q.empty())
//	{
//		int u = q.front();
//		q.pop();
//		idx[cnt++] = u;
//		for (int i = 0; i < ds[u].size(); i++)
//		{
//			int v = ds[u][i];
//			inDeg[v]--;
//			if (inDeg[v] == 0)
//				q.push(v);
//		}
//	}
//}
//
//int main()
//{
//	freopen("data.inp", "r", stdin);
//	input();
//	topoSort();
//	for (int i = 1; i <= n; i++)
//		printf("%d: %d\n", i, idx[i]);
//	return 0;
//}