//#include <iostream>
//#include <utility>
//#include <vector>
//using namespace std;
//#define MAX 50
//int x[MAX];
//bool r[MAX];
//bool d1[2 * MAX], d2[2 * MAX];
//int n, m;
//int cnt = 0;
//vector <pair<int, int> > hole;
//
//
//void PrintSol()
//{
//	cnt++;
//	//cout << cnt << endl;
//}
//
//void Input()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		hole.push_back(make_pair(x, y));
//	}
//}
//
//
//void TRY(int i)
//{
//	for (int v = 1; v <= n; v++)
//	{
//		if (r[v] && d1[i - v + n - 1] && d2[i + v])
//		{
//			x[i] = v;
//			r[v] = false;
//			d1[i - v + n - 1] = false;
//			d2[i + v] = false;
//			if (i == n)
//				PrintSol();
//			else
//				TRY(i + 1);
//			r[v] = true;
//			d1[i - v + n - 1] = true;
//			d2[i + v] = true;
//			for (int k = 0; k < m; k++)
//			{
//				if (v == hole[k].first && i == hole[k].second)
//				{
//					r[v] = false;
//					d1[i - v + n - 1] = false;
//					d2[i + v] = false;
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	freopen("input.inp", "r", stdin);
//	Input();
//	for (int i = 1; i <= n; i++)
//		r[i] = true;
//	for (int i = 0; i <= 2 * n - 2; i++)
//		d1[i] = true;
//	for (int i = 2; i <= 2 * n; i++)
//		d2[i] = true;
//	TRY(1);
//	cout << cnt;
//	return 0;
//}
