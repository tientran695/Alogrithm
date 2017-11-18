#include <iostream>
#include <stack>
#include <string>
using namespace std;

//Input: Dong 1 chua so nguyen n la so xau bieu thuc
//n dong tiep theo, moi dong la 1 xau bieu thuc
//Output: n dong, moi dong ghi 1 so nguyen 0 or 1
//0 = false; 1 = true.
bool match(char c1, char c2)
{
	if (c1 == '(' && c2 == ')') return true;
	if (c1 == '[' && c2 == ']') return true;
	if (c1 == '{' && c2 == '}') return true;
	return false;
}

bool check(string expr)
{
	stack<char> S;
	for (int i = 0; i < expr.length(); i++)
	{
		char c = expr[i];
		if (c == '(' || c == '{' || c == '[')
			S.push(c);
		else if (c == ')' || c == '}' || c == ']')
		{
			if (S.size() == 0) return false;
			char cc = S.top();
			S.pop();
			if (!match(cc, c)) return false;
		}
	}
	return S.empty();
}
int main()
{
	freopen("input.inp", "r", stdin);
	int n;
	string str;
	cin >> n;
	while (n--)
	{
		cin >> str;
		cout << check(str) << endl;
	}
	return 0;
}

//queue<pair<int, int>> q;
//q.push(make-pair(x, y)) ,xem make pair tren google
//q.