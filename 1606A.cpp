#include <iostream>
using namespace std;

string solve1(string s){
    s[0] = s[s.length() - 1];
    return s;
}

void solve() {
    string s; cin >> s;
    cout << solve1(s) << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}