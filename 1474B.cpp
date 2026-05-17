#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool isPrime(long long n){
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

int func(long long n){
    while(!isPrime(n)) n++;
    return n;
}

void solve() {
    int n; cin >> n;
    int b = n+1;
    
    long long p = func(n + 1); 
    long long i = p + n;  
    long long ans = func(i) * p;
    

    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}