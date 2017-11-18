//#include <iostream>
//using namespace std;
//#define MAX 10000
//int b[MAX];
//int n;
//
//void PrintSol()
//{
//	for (int i = 1; i <= n; i++)
//		cout << b[i] << " ";
//}
//int sum()
//{
//	int s = 0;
//	for (int i = 1; i <= n; i++)
//		s += b[i];
//	return s;
//}
//void TRY(int max, int arr[])
//{
//	for (int i = max; i >= 1; i--)
//	{
//		if (arr[i] == 0)
//		{
//			arr[i] = 1;
//			if (sum() == 1)
//				cout << -1;
//			else
//				PrintSol();
//			exit(0);
//		}
//		else if (arr[i] == 1)
//		{
//			arr[i] = 0;
//			max--;
//			TRY(max, arr);
//		}
//	}
//}
//
//int main()
//{
//	freopen("input.inp", "r", stdin);
//	cin >> n;
//	getchar();
//	for (int i = 1; i <= n; i++)
//		b[i] = getchar() - 48;
//	TRY(n, b);
//	return 0;
//}
