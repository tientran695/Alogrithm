//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//#define MAX 10000
//int a[MAX];
//int n, h;
//int T;
//int cnt = 0;
//int check = 0;
//void PrintSol()
//{
//	for (int i = 1; i <= n; i++)
//		cout << a[i];
//	cout << endl;
//}
//
//bool Fcheck()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] == 1)
//			check++;
//	}
//	if (check == h)
//		return true;
//	return false;
//}
//
//void Try(int i)
//{
//	int t = 1;
//	if (cnt == h)
//		t = 0;
//	for (int v = 0; v <= t; v++)
//	{
//		a[i] = v;
//		if (a[i])
//			cnt++;
//		if (i == n)
//		{
//			if (cnt == h)
//				PrintSol();
//		}
//		else
//			Try(i + 1);
//		if (a[i]) //quay lui
//			cnt--;
//	}
//}
//int main()
//{
//	freopen("input.inp", "r", stdin);
//	cin >> T;
//	while (T--)
//	{
//		cin >> n >> h;
//		Try(1);
//		cout << endl;
//	}
//	return 0;
//}
