#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int longestCommonSubstring(string a, string b) {
    int n = a.length();
    int m = b.length();
    
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int maxLen = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i-1] == b[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                maxLen = max(maxLen, dp[i][j]);
            } else {
                dp[i][j] = 0;  
            }
        }
    }
    return maxLen;
}

void solve() {
    string a, b;
    cin >> a >> b;
    cout <<  a.length() + b.length() - 2 * longestCommonSubstring(a, b) << "\n";
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}