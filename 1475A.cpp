#include <iostream>
using namespace std;

bool func(long long n){
    while (n % 2 == 0) {
        n /= 2;
    }
    if(n==1) return false;
    return true;
}

void solve() {
    long long int n; cin >> n;

    if( n==1 || n==2){
        cout << "NO" << endl;
        return;
    }
    if(n%2 != 0){
        cout << "YES" << endl;
        return;
    }

    bool flag = func(n);

    if(flag) cout << "YES" << endl;
    else  cout << "NO" << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}