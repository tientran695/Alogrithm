//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//#define MAX 10000
//int b[MAX];
//int n;
//int m;
//
//void PrintSol()
//{
//	for (int i = 1; i <= m; i++)
//		cout << b[i] << " ";
//}
//void TRY(int max, int arr[])
//{
//	for (int i = max; i >= 1; i--)
//	{
//		if (arr[i] == n)
//		{
//			max--;
//			if (max == 1)
//			{
//				cout << -1;
//				exit(0);
//			}
//			n--;
//			TRY(max, arr);
//		}
//		else
//		{
//			arr[i]++;
//			PrintSol();
//			exit(0);
//		}
//	}
//}
//
//int main()
//{
//	freopen("input.inp", "r", stdin);
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//		cin >> b[i];
//	TRY(m, b);
//	return 0;
//}
