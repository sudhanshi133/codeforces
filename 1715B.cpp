#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    long long n, k, b, s;
    cin >> n >> k >> b >> s;

    if (s < b * k || s > b * k + n * (k - 1)) {
        cout << -1 << "\n";
        return;
    }

    long long remainder = s - b * k;  // extra to distribute (each element gets at most k-1)

    vector<long long> ans(n, 0);

    ans[0] = b * k;

    for (int i = 0; i < n; i++) {
        long long add = min(remainder, k - 1);
        ans[i] += add;
        remainder -= add;
        if (remainder == 0) break;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i];
        if (i != n - 1) cout << " ";
    }
    cout << "\n";
}
int main() {
    int t; cin >> t;
    while (t--) solve();
} 
