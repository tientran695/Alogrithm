//#include<iostream>
//#include <queue>
//#include <vector>
//#include <functional>
//using namespace std;
//#define MAX 10005
//#define INF 10000000000
//#define mp make_pair
//typedef pair<int, int> ii;
//
//int n, m;
//int mark[MAX] = {};
//int d[MAX] = {};
//int near[MAX] = {};
//priority_queue<ii, vector<ii>, greater<ii> > pq;
//vector<ii> ds[MAX];
//
//void input(){
//	cin >> n >> m;
//	//doc ma tran ke
//	int u, v, w;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v >> w;
//		ds[u].push_back(mp(v, w));
//		ds[v].push_back(mp(u, w));
//		d[i] = INF;
//	}
//}
//
//long long prim(int s)
//{
//	long long len = 0;
//	d[s] = 0;
//	pq.push(mp(d[s], s));
//	while (!pq.empty())
//	{
//		int u = pq.top().second;
//		d[u] = pq.top().first;
//		pq.pop();
//		if (!mark[u])
//		{
//			mark[u] = 1;
//			len += d[u];
//			for (int i = 0; i < ds[u].size(); i++)
//			{
//				int v = ds[u][i].first;
//				int w = ds[u][i].second;
//				if (!mark[v] && w < d[v])
//				{
//					d[v] = w;
//					near[v] = u;
//					pq.push(mp(d[v], v));
//				}
//			}
//		}
//	}
//	return len;
//}
//
//priority_queue<ii, vector<ii>, greater<ii> > kq;
//void printPath(int parent[])
//{
//	
//	for (int i = 2; i <= n; i++)
//	{
//		if (parent[i] < i)
//			kq.push(mp(parent[i], i));
//		else
//			kq.push(mp(i, parent[i]));
//	}
//	while (!kq.empty())
//	{
//		cout << kq.top().first << " " << kq.top().second << " ";
//		kq.pop();
//	}
//}
//
//int main()
//{
//	freopen("prime.inp", "r", stdin);
//	input();
//	cout << prim(1) << endl;
//	printPath(near);
//	return 0;
//}
