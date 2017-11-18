#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005
int n, c;
int x[MAXN];

void input(){
	cin >> n >> c;
	for(int i = 1; i <= n; i++)
		cin >> x[i];
	sort(x+1, x+n+1);
}

//kiem tra co the xap c con bo sao cho khoang cach ngan nhat 2 con lon hon hoac bang dis hay ko, dung tra ve 1, sai tra ve 0
int p(int dis){
	int prev = 1, cnt = 1; // con bo dau tien va chuong duoc xep dau tien
	for(int i = 2; i <= n; i++)
	{
		if(x[i] >= x[prev] + dis){
			cnt ++;
			prev = i;
		}
	}
	return cnt >= c;

}

int search(){
	int lo = 1, hi = x[n] - x[1];
	while(hi > lo + 1){
		int mid = (hi + lo) /2;
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
	int T;
	cin >> T;
	while(T--){
		input();
		cout << search() << endl;
	}
	return 0;
}
