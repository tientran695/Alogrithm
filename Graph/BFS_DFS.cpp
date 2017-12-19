//#include <iostream>
//#include <stdio.h>
//#include <vector>
//#include <queue>
//using namespace std;
//#define MAX 10005
//int n, m;
//vector<int> ds[MAX];//ds vao
//vector<int> vSet[MAX];//luu thanh phan lien thong
//int visited[MAX] = {};
//int cc_num = 0;
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
//		ds[v].push_back(u);
//	}
//}
//
//void DFS_CC(int u)
//{
//	vSet[cc_num].push_back(u);
//	visited[u] = 1;
//	for (int i = 0; i < ds[u].size(); i++)
//	{
//		if (!visited[ds[u][i]])
//			DFS_CC(ds[u][i]);
//	}
//}
//
//void BFS_CC(int u)
//{
//	q.push(u);
//	visited[u] = 1;
//	while (!q.empty())
//	{
//		int u = q.front();
//		q.pop();
//		vSet[cc_num].push_back(u);
//		for (int i = 0; i < ds[u].size(); i++)
//		{
//			if (!visited[ds[u][i]])
//			{
//				q.push(ds[u][i]);
//				visited[ds[u][i]] = 1;
//			}
//		}
//	}
//}
//
//int main()
//{
//	freopen("input.inp", "r", stdin);
//	input();
//	for (int i = 1; i <= n; i++)
//	{
//		if (!visited[i])
//		{
//			cc_num++;
//			//DFS_CC(i);
//			BFS_CC(i);
//		}
//	}
//	printf("There are #d connected component as follows: \n", cc_num);
//	for (int i = 1; i <= cc_num; i++)
//	{
//		printf("The %d-th conected component: \n", i);
//		for (int j = 0; j < vSet[i].size(); j++)
//			cout << vSet[i][j] << " ";
//		cout << endl;
//	}
//	return 0;
//}