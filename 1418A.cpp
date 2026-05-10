#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;

    long long need = k * (y + 1) - 1;
    long long ans = (need + (x - 2)) / (x - 1) + k;

    cout << ans << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}