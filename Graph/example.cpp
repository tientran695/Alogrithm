//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//#define MAXN 100
//
//int n, m, u, v, s, t;
//queue<pair<int, int>> q;
//int visited[MAXN][MAXN] = {};
//pair<int, int> parent[MAXN][MAXN];
//vector<pair<int, int> > path;
//
//int dx[] = { -1,  1,  2, 2, 1, -1, -2, -2 };
//int dy[] = { -2, -2, -1, 1, 2,  2,  1, -1 };
//
//void input()
//{
//	cin >> n >> m >> u >> v >> s >> t;
//}
//
//int check(int x, int y)
//{
//	return 1 <= x && x <= n && 1 <= y && y <= m && !visited[x][y];
//}
//
//void bfs(pair<int, int> start)
//{
//	q.push(start);
//	parent[start.first][start.second] = make_pair(0, 0);
//	while (!q.empty())
//	{
//		pair<int, int> node = q.front();
//		int x = node.first;
//		int y = node.second;
//		visited[x][y] = 1;
//		q.pop();
//
//		if (x == s && y == t)
//		{
//			do
//			{
//				cout << x << " " << y << endl;
//				path.push_back(make_pair(x, y));
//				int k = x; int l = y;
//				x = parent[k][l].first;
//				y = parent[l][k].second;
//			} while (!(x == 0 && y == 0));
//			break;
//		}
//
//		for (int i = 0; i < 8; i++)
//		{
//			if (check(x + dx[i], y + dy[i]))
//			{
//				visited[x + dx[i]][y + dy[i]] = 1;
//				q.push(make_pair(x + dx[i], y + dy[i]));
//				parent[x + dx[i]][y + dy[i]] = make_pair(x, y);
//			}
//		}
//
//		for (int i = path.size() - 1; i >= 0; i--)
//		{
//			cout << path[i].first << " " << path[i].second << endl;
//		}
//	}
//}
//
//int main()
//{
//	freopen("input.inp", "r", stdin);
//	input();
//	bfs(make_pair(u, v));
//	return 0;
//}