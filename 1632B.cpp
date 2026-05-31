#include <iostream>
using namespace std;

void solve(){
    int n; cin >> n;

    int p = 1;
    while(p * 2 <= n-1) p *= 2;
    cout << p << " " << 0 << " ";

    for(int i = 1; i < n; i++){
        if(i != p) cout << i << " ";
    }
    cout << "\n";
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}
