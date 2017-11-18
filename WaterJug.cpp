//#include <iostream>
//#include <queue>
//#include <stack>
//#include <map>
//#include <utility>
//using namespace std;
//
//struct State {
//	int x, y;
//
//	// Used by map to efficiently implement lookup of seen states
//	bool operator < (const State& that) const {
//		if (x != that.x) return x < that.x;
//		return y < that.y;
//	}
//};
//
//int WaterJug(int a, int b, int c, stack <pair <State, int> >& path)
//{
//	queue <State> q;
//	State start; //State bat dau
//	start.x = a;
//	start.y = b;
//	State goal;
//	goal.x = -1;
//	goal.y = -1;
//	map <State, pair<State, int> > parentOf; //map chua nut cha
//	q.push(start);
//	parentOf[start] = make_pair(start, 0);
//
//	while (!q.empty())
//	{
//		State top = q.front();
//		q.pop();
//
//		if (top.x == c || top.y == c)
//		{
//			goal = top;
//			break;
//		}
//
//		//Xet cac TH
//		//1. (x, 0)
//		if (top.y > 0)
//		{
//			State newState;
//			newState.x = top.x;
//			newState.y = 0;
//			if (parentOf.find(newState) == parentOf.end())
//			{
//				q.push(newState);
//				parentOf[newState] = make_pair(top, 1);
//			}
//		}
//
//		//2. (0, y)
//		if (top.x > 0)
//		{
//			State newState;
//			newState.x = 0;
//			newState.y = top.y;
//			if (parentOf.find(newState) == parentOf.end())
//			{
//				q.push(newState);
//				parentOf[newState] = make_pair(top, 2);
//			}
//		}
//
//		//3. (a, y)
//		if (top.x < a)
//		{
//			State newState;
//			newState.x = a;
//			newState.y = top.y;
//			if (parentOf.find(newState) == parentOf.end())
//			{
//				q.push(newState);
//				parentOf[newState] = make_pair(top, 3);
//			}
//		}
//
//		//4. (x, b)
//		if (top.y < b)
//		{
//			State newState;
//			newState.x = top.x;
//			newState.y = b;
//			if (parentOf.find(newState) == parentOf.end())
//			{
//				q.push(newState);
//				parentOf[newState] = make_pair(top, 4);
//			}
//		}
//
//		//5. (a, x+y-a)
//		if (top.y > 0)
//		{
//			State newState;
//			newState.x = min(top.x + top.y, a);
//			newState.y = max(0, top.x + top.y - a);
//			if (parentOf.find(newState) == parentOf.end())
//			{
//				q.push(newState);
//				parentOf[newState] = make_pair(top, 5);
//			}
//		}
//
//		//6. (x+y, 0)
//		if (top.x > 0)
//		{
//			State newState;
//			newState.x = max(0, top.x + top.y - b);
//			newState.y = min(top.x + top.y, b);
//			if (parentOf.find(newState) == parentOf.end())
//			{
//				q.push(newState);
//				parentOf[newState] = make_pair(top, 6);
//			}
//		}
//	}
//	if (goal.x == -1 || goal.y == -1)
//		return -1;
//
//	path.push(make_pair(goal, 0));
//
//	while (parentOf[path.top().first].second != 0)
//		path.push(parentOf[path.top().first]);
//	return path.size() - 1; //so lan dem
//}
//
//double read()
//{
//	bool checkDau = false;
//	double var = 0;
//	while (true)
//	{
//		int ch = getchar();
//		if (ch == '-')
//		{
//			checkDau = true;
//			continue;
//		}
//		if (ch >= '0' && ch <= '9')
//			var = var * 10 + (ch - '0');
//		if ((ch == ' ') || (ch == '\n') || (ch == -1))
//			break;
//	}
//	if (checkDau)
//		var = -var;
//	return var;
//}
//
//int main()
//{
//	int n, a, b, c;
//	freopen("input.inp", "r", stdin);
//	cin >> n;
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		stack <pair<State, int> > path;
//		a = read();
//		b = read();
//		c = read();
//		cout << WaterJug(a, b, c, path) << endl;
//	}
//	return 0;
//}