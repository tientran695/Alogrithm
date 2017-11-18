//#include <iostream>
//using namespace std;
//#define MAX 10000
//int a[MAX];
//int b[MAX]; //Ma tran chua to hop dau vao
//int n;
//int k; //so phan tu cua chuoi sinh ra
//bool isContinue = true;
//int cnt = 0;
//int mark = -4;
//
//void PrintSol()
//{
//	for (int i = 1; i <= k; i++)
//	{
//		cout << a[i] << " ";
//	}
//	//cout << endl;
//}
//
//bool check()
//{
//	int mark[MAX];
//	for (int i = 1; i <= k; i++)
//	{
//		if (a[i] == b[i])
//			mark[i] = 1;
//		else
//			mark[i] = 0;
//	}
//	int s = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		s = s + mark[i];
//	}
//	if (s == k)
//		return true;
//	return false;
//}
//
//int C(int k, int n){
//	if (k == n || k == 0) return 1;
//	return C(k - 1, n - 1) + C(k, n - 1);
//}
//
//void Try(int i)
//{
//	for (int v = a[i - 1] + 1; v <= n - k + i; v++)
//	{
//		a[i] = v;
//		if (i == k)
//		{
//			cnt++;
//			if (check())
//				mark = cnt;
//			if (cnt == mark + 1)
//			{
//				isContinue = false;
//				PrintSol();
//			}
//			if (mark == C(k, n))
//			{
//				isContinue = false;
//				cout << -1;
//			}
//		}
//		else if (isContinue)
//			Try(i + 1);
//	}
//}
//int main()
//{
//	freopen("input.inp", "r", stdin);
//	cin >> n >> k;
//	for (int i = 1; i <= k; i++)
//		cin >> b[i];
//	a[0] = 0;
//	b[0] = 0;
//	Try(1);
//	return 0;
//}