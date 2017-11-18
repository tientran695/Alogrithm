#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 605

int s[MAX][MAX];
int W, H, N;

void Input()
{
	cin >> W >> H >> N;
	for (int i = 1; i <= W; i++)
		for (int j = 1; j <= H; j++)
			s[i][j] = i * j;
	int w, h;
	for (int i = 1; i <= N; i++)
	{
		cin >> w >> h;
		s[w][h] = 0;
	}
}

int dp()
{
	for (int w = 1; w <= W; w++)
	for (int h = 1; h <= H; h++)
	{
		//tinh s[w][h]
		for (int i = 1; i < W; i++)
			s[w][h] = min(s[w][h], s[i][h] + s[w - i][h]);
		for (int i = 1; i < H; i++)
			s[w][h] = min(s[w][h], s[w][i] + s[w][h - i]);
	}
	return s[W][H];
}

int main()
{
	freopen("input.inp", "r", stdin);
	Input();
	cout << dp() << endl;
	return 0;
}