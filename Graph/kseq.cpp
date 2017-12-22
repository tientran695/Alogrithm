//#include <iostream>
//using namespace std;
//#define MAXN 1000000
//long long n;
//int k;
//int A[MAXN];
//
//void input()
//{
//	cin >> n >> k;
//	for (long long i = 0; i < n; i++)
//		cin >> A[i];
//}
//
//int main()
//{
//	freopen("kseq.inp", "r", stdin);
//	input();
//	long long sum = 0;
//	for (int i = 0; i < k; i++)
//	{
//		sum = sum + A[i];
//	}
//	long long ans = sum;
//	for (long long i = 0; i < n; i++)
//	{
//		sum = sum + A[i + k] - A[i];
//		if (ans <= sum)
//			ans = sum;
//	}
//	cout << ans << endl;
//	return 0;
//}