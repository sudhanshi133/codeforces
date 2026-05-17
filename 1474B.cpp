#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


long long func(long long i, int n){

}

void solve() {
    int n; cin >> n;
    int b = n+1;
    
    long long ans = b;
    bool flag = true;
    long long i = b+n;
  
    ans *= func(i, n);
    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}