#include <iostream>
using namespace std;
#define MAX 10000
int b[MAX];
int n;
int m;

void PrintSol()
{
	for (int i = 1; i <= n; i++)
		cout << b[i] << " ";
}
int sum()
{
	int s = 0;
	for (int i = 1; i <= n; i++)
		s += b[i];
	return s;
}
void TRY(int max, int arr[])
{
	for (int i = max; i >= 1; i--)
	{
		if (arr[i] != max)
		{
			arr[i]++;
			PrintSol();
			exit(0);
		}
		else if (arr[i] == max)
		{
			max--;
			TRY(max, arr);
		}
	}
}

int main()
{
	freopen("input.inp", "r", stdin);
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
		cin >> b[i];
	TRY(n, b);
	return 0;
}
