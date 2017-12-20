//#include <iostream>
//using namespace std;
//#define MAXN 1000005
//
//int n, m;
//int A[MAXN] = {};
//long long sumarr[MAXN] = {};
//long long sum = 0;
//int index = 0;
//
//void input()
//{
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++)
//		cin >> A[i];
//}
//
//
//void TRY()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (A[i] == m)
//		{
//			int right = i;
//			int left = i;
//			sum = m;
//			while (true)
//			{
//				right++;
//				sum = sum + A[right];
//				if (A[right] <= m || A[right] == 0)
//				{
//					sum = sum - A[right];
//					break;
//				}
//			}
//			while (true)
//			{
//				left--;
//				sum = sum + A[left];
//				if (A[left] <= m || A[left] == 0)
//				{
//					sum = sum - A[left];
//					break;
//				}	
//			}
//			sumarr[index++] = sum;
//		}
//	}
//}
//
//long long maxarr()
//{
//	long long max = sumarr[1];
//	for (int i = 0; i < index; i++)
//	{
//		if (sumarr[i] > max)
//			max = sumarr[i];
//	}
//	return max;
//}
//
//int main()
//{
//	freopen("alice.inp", "r", stdin);
//	input();
//	TRY();
//	cout << maxarr() << endl;
//	return 0;
//}
