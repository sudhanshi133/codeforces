#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    long long n, a, b;
    cin >> n >> a >> b;
    long long ans = 0;

    if(n==1){
        ans = min(a,b);
    }
    else if(a*3 <= b){
        ans = n * a;
    }
    else{
        int remainder = n%3;
        ans+= (n/3) * b;
        if(remainder == 1){
            if(a > b) ans += b;
            else ans += a;      
        }
        else if(remainder == 2) {
            if(a*2 > b) ans += b;
            else ans += a*2;
        }
    }

    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}