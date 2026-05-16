#include <iostream>
using namespace std;

void solve() {
    long long n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

long long diff = abs(x1 - x2);
long long a = min(diff, n - diff);
long long b = max(diff, n - diff);

cout << min(a + k, b);
cout << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}
