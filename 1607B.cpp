#include <iostream>
using namespace std;

void solve() {
    long long x,n;
    cin >> x >> n;

    long long left = n%4;
    long long divisor = n/4;
    long long ans = x;

    int count = 1;
    while(left--){
        long long b = (divisor * 4) + count;
        if(ans%2==0) b = -1*b;
        ans += b;
        count ++;
    }



   cout << ans << "\n";
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}