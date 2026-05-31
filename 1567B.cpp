#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long xorUpTo(long long n){
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}

void solve() {
   int a, b;
   cin >> a >> b;

   long long result = xorUpTo(a - 1); 
   long long ans = a;

   if(result == b) cout << ans << endl;
   else 
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}