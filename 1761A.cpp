#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool func(int n, int a, int b){
    if(a+b < n-1 || n < 2) return true;
    else if(n==a && a==b) return true;
    return false;
}

void solve() {
    int n,a,b;
    cin >> n >> a >> b;
    if(func(n,a,b)) cout << "Yes\n";
    else cout << "No\n";
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}