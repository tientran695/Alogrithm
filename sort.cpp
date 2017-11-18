//#include <iostream>
//#include <stdio.h>
//#include <time.h>
//using namespace std;
//#define MAX 1000000
//double a[MAX];
//int n;
//
//void input()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//}
//
//void generateInput()
//{
//	srand(time(NULL));
//	cout << "Enter n: ";
//	cin >> n;
//	freopen("data.inp", "w", stdout);
//	cout << n << endl;
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand() % 1000 - 500;
//		cout << a[i] << " ";
//	}
//}
//
//void display()
//{
//	for (int i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}
//
//void swap(double &a, double &b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
//void insertionSort(int b[], int x)
//{
//	for (int i = 1; i < x; i++)
//	{
//		int last = b[i];
//		int j = i;
//		while (j > 0 && b[j - 1] > last)
//		{
//			b[j] = b[j - 1];
//			j--;
//		}
//		b[j] = last;
//	}
//}
//
//void selectionSort(int b[], int x)
//{
//	for (int i = 0; i < x - 1; i++)
//	{
//		int imin = i;
//		for (int j = i + 1; j < x; j++)
//		{
//			if (b[imin] > b[j])
//				imin = j;
//		}
//		swap(b[i], b[imin]);
//	}
//}
//
//void bubbleSort(double b[], int x)
//{
//	int swapped;
//	do{
//		swapped = 0;
//		for (int i = 0; i < x - 1; i++)
//		if (b[i] > b[i + 1])
//		{
//			swap(b[i], b[i + 1]);
//			swapped = 1;
//		}
//	} while (swapped == 1);
//}
//
//int main()
//{
//	generateInput(); //sinh mot lan dy nhat
//	/*freopen("data.inp", "r", stdin);
//	input();
//	bubbleSort(a, n);
//	display();*/
//	return 0;
//}