#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool possible(long long h, vector<int>& a, long long x) {
    long long water = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < h) {
            water += (h - a[i]);
            if (water > x) return false;
        }
    }
    return true;
}

void solve() {
    int n;
    long long x;
    cin >> n >> x;

    vector<int> a(n);
    for (auto &v : a) cin >> v;

    long long low = 1, high = 2e9, ans = 1;

    sort(a.begin(), a.end());
    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (possible(mid, a, x)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
