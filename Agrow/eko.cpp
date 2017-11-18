#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005
int n, m;
int x[MAXN];

void input(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> x[i]; //chieu cao cay
	sort(x + 1, x + n + 1);
}

//kiem tra co the xap c con bo sao cho khoang cach ngan nhat 2 con lon hon hoac bang dis hay ko, dung tra ve 1, sai tra ve 0
int p(int h)
{
  long long s = 0;
  int r = n;
  while(x[r] > h)
  {
    s += x[r--] - h; //cong don go thua
  }
  return s >= m;
}

int search()
{
	int lo = 0, hi = x[n];
	while(hi > lo + 1)
  {
		int mid = (hi + lo) / 2;
		if(p(mid)) lo = mid;
		else hi = mid - 1;
	}
	// doan (lo, lo) hoac(lo, lo+1)
	if(p(hi)) return hi;
	else return lo;
}

int main()
{
	ios::sync_with_stdio(false);
	input();
	cout << search() << endl;
	return 0;
}
