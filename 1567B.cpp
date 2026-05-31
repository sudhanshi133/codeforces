#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long xorUpTo(long long n){
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}

void solve() {
    long long a, b;
    cin >> a >> b;

    long long result = xorUpTo(a - 1);  // XOR of 0 to a-1

    if(result == b){
        // XOR already matches!
        cout << a << "\n";
    }
    else {
        long long x = result ^ b;  // extra element needed
        if(x != a){
            // x can be added safely
            cout << a + 1 << "\n";
        }
        else {
            // x == a, can't add! need 2 extra elements
            cout << a + 2 << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
}
