#include <iostream>
using namespace std;

int main()
{
	freopen("input.inp", "r", stdin);
	int T;
	cin >> T;
	for (int tc = 0; tc < T; tc++)
	{
		long N, S;
		cin >> N >> S;
		long sum = N * (N + 1) / 2;
		long c = sum - S;
		if (c % 2 == 1)
		{
			cout << 0 << endl;
			return 0;
		}
		c = c / 2;
		for (int i = N; i > 0; i--)
		{
			if (c - i >= 0)
				c = c - i;
		}
		if (c != 0)
			cout << 0 << endl;
		else
			cout << 1 << endl;
	}
	return 0;
}