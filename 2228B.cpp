#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    long long n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    long long leftEnd  = ((x2-k-1)%n+n)%n+1;  
    long long rightEnd = ((x2+k-1)%n)%n+1;    

    long long distLeft  = min(abs(x1 - leftEnd),  n - abs(x1 - leftEnd));
    long long distRight = min(abs(x1 - rightEnd), n - abs(x1 - rightEnd));  

    
return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}