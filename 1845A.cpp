#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void func(int n, int k, int x){
   cout <<"in func" ;
   cout << endl;
}

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    if(x!=1){
        cout << "YES" << endl;
        cout << n << endl;
        while(n--){
        cout << 1 << " ";
      }
      cout << endl;
    }

    else func(n,k,x);

    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}