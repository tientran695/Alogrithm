#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 250
int a[MAX];
int n, k1, k2;

void PrintSol()
{
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
  cout << endl;
}

void Try(int i)
{
  int start = 0;
  int end = 1;
  if(i > 1){
    int cnt = 0;
    int m = i - 1;
    while (a[m--]) {
      cnt++;
    }
    if(cnt < k1) start = 1;
    else if(cnt == k2) end = 0;
}

	for (int v = start; v <= end; v++)
	{
		a[i] = v;
		if (i == n)
		{
      if(a[n] == 1){
        int cnt = 0;
        int m = n;
        while (a[m--]) {
          cnt++;
        }
        if(cnt < k1) continue;
    }
      PrintSol();
    }
		else
			Try(i + 1);
    }
}
int main()
{
	//freopen("input.inp", "r", stdin);
	cin >> n >> k1 >> k2;
	Try(1);
	return 0;
}
