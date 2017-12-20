//#include<iostream>
//#include <queue>
//#include <vector>
//#include <functional>
//using namespace std;
//#define MAX 10005
//#define INF 100000000000
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
//	cin >> n;
//	//doc ma tran ke
//	int w;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> w;
//			if (i != j)
//			{
//				ds[i].push_back(mp(j, w));
//				//ds[j].push_back(mp(i, w));
//			}	
//		}
//		d[i] = INF;
//	}
//}
//
//int prim(int s)
//{
//	int len = 0;
//	//mark[s] = 1;
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
//int main(){
//	freopen("network.inp", "r", stdin);
//	input();
//	cout << prim(1) << endl;
//	return 0;
//}
