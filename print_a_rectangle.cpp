#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


int main () {
  int H, W;
  int i, j;
  while (1) {
    cin >> H >> W;
    if (H == 0 && W == 0) break;
    rep(i,H) {
      rep(j,W) {
	cout << '#';
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
