#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int open = 0, close = 0;
    int ans = 0;
    int i = 0;
    
    while(i < n){
        if(s[i] == ')' && close >= open) {
            ans++;
        }
        else if(s[i] == ')') close++;
        else if(s[i] == '(') open++;
        i++;
    }

    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}