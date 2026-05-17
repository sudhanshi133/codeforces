#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
   long long a, b;
   cin >> a >> b;

   long long ans = 1e9;
    
   for(int i=0; i<=30; i++){
    long long x = a;
    if(b+i >= 2){
        long long total = i;
        while(x>0){
            x=x/(b+i);
            total++;
        }
     ans = min(ans, total);
   }
}

   cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}