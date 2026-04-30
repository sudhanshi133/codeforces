#include <iostream>
using namespace std;

bool func(long long n, long long k, long long x){
    long long sum = (k*(k+1))/2;
    if(sum > x) return false;
    long long b = n - k;
    sum = (n*(n+1)/2) - (b*(b+1)/2);
    if(x>sum) return false;
    return true;
}

void solve() {
long long n,k,x;
cin >> n >> k >> x;

if(func(n,k,x)) cout << "YES\n";
else cout << "NO\n";
}

int main() {
int t; cin >> t;
while (t--) solve();
}