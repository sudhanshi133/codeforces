#include <iostream>
using namespace std;

long long MOD = 1e9 + 7;

void solve(){
    long long n; cin >> n;

    long long inv2 = 500000004LL; // modular inverse of 2
    long long inv6 = 166666668LL; // modular inverse of 6

    // 2 * (n-1)*n*(2n-1)/6
    long long sum_sq = 2LL
                     * ((n-1) % MOD) % MOD
                     * (n % MOD) % MOD
                     * ((2*n - 1) % MOD) % MOD
                     * inv6 % MOD;

    // (n-1)*n/2
    long long sum_i = (n-1) % MOD
                    * (n % MOD) % MOD
                    * inv2 % MOD;

                    
    long long last = (n % MOD) * (n % MOD) % MOD;

    long long ans = (sum_sq + sum_i + last) % MOD;

    cout << ans * 2022LL % MOD << "\n";
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}
