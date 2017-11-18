#include "matrix.h"
#include <string>
matran A;

matran powMat(matran &x, unsigned n) {
	if (n == 0 || n == 1) return x;
	if (n % 2 != 0)
		return x * powMat(x, n - 1);
	matran st = powMat(x, n / 2);
	return st * st;
}

long long Fibonacci(int n)
{
	matran ans = powMat(A, n - 1);
	long long fn = ans.get11(); //f[0] = 0; f[1] = 1
	return fn;
}

char NthChar(int row, int index) {
	if (row == 1) return '0';
	if (row == 2) return '1';
	if (index < Fibonacci(row - 1)) return NthChar(row - 1, index);
	return NthChar(row - 2, index - Fibonacci(row - 1));
}

int main()
{
	freopen("input.inp", "r", stdin);
	int n;
	int tc = 1;
	int done = 0;
	while (true)
	{
		string p;
		cin >> n;
		getchar();
		while (1){
			char c = getchar();
			if (c != '\n' && c != EOF){
				p += c;
			}
			else if (c == EOF){
				done = 1;
				break;
			}
			else{
				break;
			}
		}
		//getline(cin, p);
		//---------------
		int ans = 0;
		for (int i = 0; i < Fibonacci(n + 1) - p.length() + 1; i++)
		{
			int cnt = 0;
			for (int j = 0; j < p.length(); j++)
			{
				if (p[j] == NthChar(n + 1, i + j))
					cnt++;
			}
			if (cnt == p.length())
				ans++;
		}
		cout << "Case " << tc << ": " << ans << endl;
		ans = 0;
		tc++;
		if (done) break;
	}
	return 0;
}