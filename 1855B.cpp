#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    long long n; cin >> n;
    long long ans = 1;
    for(long long i=1;;i++){
        if(n%i!=0){
            ans = i-1;
            break;
        }
    }
    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}