//#include <iostream>
//#include <vector>
//#include <queue>
//#include <functional>
//using namespace std;
//#define MAX 10005
//#define INF 10000000000
//#define pb push_back
//#define mp make_pair
//typedef pair<int, int> ii;
//vector<ii> ds[MAX];
//int mark[MAX] = {};
//int d[MAX] = {};
//int p[MAX] = {};
//int n, m;
//priority_queue<ii, vector<ii>, greater<ii>> pq;
//
//void input(){
//	cin >> n >> m;
//	//doc ma tran ke
//	int u, v, w;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v >> w;
//		ds[u].push_back(mp(v, w));
//	}
//	for (int i = 1; i <= n; i++){
//		d[i] = INF;
//	}
//}
//		
//
//void dijkstra(int s, int t)
//{
//	//khoi tao dinh cha
//	for (int v = 1; v <= n; v++)
//	if (v != s)
//		p[v] = s;
//
//	for (int i = 0; i < ds[s].size(); i++)
//	{
//		int v = ds[s][i].first;
//		int w = ds[s][i].second;
//		d[v] = w;
//	}
//
//	d[s] = 0;
//	p[s] = 0;
//	pq.push(mp(d[s], s));
//	while (!pq.empty())
//	{
//		int u = pq.top().second;
//		d[u] = pq.top().first;
//		pq.pop();
//		if (!mark[u])
//		{
//			mark[u] = 1;
//			for (int i = 0; i < ds[u].size(); i++)
//			{
//				int v = ds[s][i].first;
//				int w = ds[s][i].second;
//				if (!mark[v])
//				{
//					if (d[v] > d[u] + w)
//					{
//						d[v] = d[u] + w;
//						p[v] = u;
//						pq.push(mp(d[v], v));
//					}
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	freopen("input.inp", "r", stdin);
//	input();
//	dijkstra(1, 6);
//	return 0;
//}
//
