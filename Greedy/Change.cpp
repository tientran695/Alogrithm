#include <bits/stdc++.h>
using namespace std;

int n;
int x;//so tien phai tra lai
int c[6] = {1, 5, 10, 50, 100, 500};
int S = 0;
int k;
int Change()
{
  while(x > 0)
  {
    for(int i = 5; i >= 0; i--){
      if(c[i] <= x){
        k = i;
        break;
      }
    }
    x = x - c[k];
    S++;
  }
  return S;
}

int main()
{
  cin >> n;
  x = 1000 - n;
  cout << Change();
}
