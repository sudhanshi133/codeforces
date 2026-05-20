#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(a % b, b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    long long n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n/2
         << " " << n/2 << "\n"; 
    } else {
            long long a = 1;
            long long b = n - 1; 

            if (n/2 != 1 && n % (n/2-1) == 0) {
                a = n/2 - 1;
                b = n - (n/2 - 1); 
            }
 
        cout << a << " " << b << "\n";
    }
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}