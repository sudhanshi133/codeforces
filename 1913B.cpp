#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int zeroes = 0, ones = 0;
    for (char c : s) {
        if (c == '0') zeroes++;
        else ones++;
    }

    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (ones > 0) ones--;
            else {
                cout << n - i << endl;
                return;
            }
        } else {
            if (zeroes > 0) zeroes--;
            else {
                cout << n - i << endl;
                return;
            }
        }
    }

    cout << 0 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
