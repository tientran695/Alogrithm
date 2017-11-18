#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1005
#define MOD 1000000007
//S0(0) = 1
//S0(1) = 1
//S0(i) = 0, 2<= i <= K1
//S1(i) = 0, 2<= i <= K1
int n, k1, k2;
int s0[MAX] = {}, s1[MAX] = {};
int main()
{
	cin >> n >> k1 >> k2;
	s0[0] = s0[1] = 1;
	for (int i = k1; i <= n; i++)
	{
		//tinh s0[i] va s1[i]
		s0[i] = s1[i - 1];
		for (int j = k1; j <= min(i, k2); j++)
		{
			s1[i] = (s1[i] + s0[i - j]) % MOD;
		}
	}
	cout << (s0[n] + s1[n]) % MOD;
	return 0;
}