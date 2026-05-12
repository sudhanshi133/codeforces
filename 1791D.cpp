#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> pref(n), suff(n);
    vector<int> freq(26, 0);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (freq[s[i] - 'a'] == 0) cnt++;
        freq[s[i] - 'a']++;
        pref[i] = cnt;
    }

    fill(freq.begin(), freq.end(), 0);
    cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (freq[s[i] - 'a'] == 0) cnt++;
        freq[s[i] - 'a']++;
        suff[i] = cnt;
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, pref[i] + suff[i + 1]);
    }

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
