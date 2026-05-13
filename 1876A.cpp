#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    int p; cin >> p;
    vector<int> a(n);
    vector<int> b(n);

    for(auto &ele : a) cin >> ele;
    for(auto &ele : b) cin >> ele;

    vector<pair<int,int>> pairs;
    for (int i = 0; i < a.size(); i++) {
        pairs.push_back({a[i], b[i]});  // {capacity, cost}
    }

    sort(pairs.begin(), pairs.end(), [](const pair<int,int>& x, const pair<int,int>& y) {
        if (x.second != y.second)
            return x.second < y.second;  // sort by cost ascending ✅
        return x.first > y.first;        // tie-break: higher capacity first ✅
    });

    long long ans = p;
    int remaining = n - 1;
    int i = 0;

    while (remaining > 0) {
        int cost     = min(pairs[i].second, p);  // ✅ .second = b[i] = cost
        int canCover = pairs[i].first;            // ✅ .first  = a[i] = capacity
        int covered  = min(remaining, canCover);
        ans += (long long)covered * cost;
        remaining -= covered;
        i++;
    }

    cout << ans << "\n";
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}
