//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	//Input: in.inp
//	//Output: out.inp
//	//freopen("ex.inp", "r", stdin);
//	//freopen("out.inp", "w", stdout);
//	cin >> n;
//	int *A = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> A[i];
//	int max = A[0];
//	int *s = new int[n];
//	s[0] = A[0];
//	max = s[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (s[i - 1] > 0)
//			s[i] = s[i - 1] + A[i];
//		else
//			s[i] = A[i];
//		max = max > s[i] ? max : s[i];
//	}
//	cout << max;
//	return 0;
//}