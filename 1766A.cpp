#include <iostream>
using namespace std;

void solve() {
int n; cin >> n;

int sum = 9;
if(n <= 19){
    (n > 9) ? cout << sum + 1 : cout << sum;
    cout << endl;
    return ; 
}

int k = 0 ;
int b = 0 ;
if(n < 100){
   b = n/10 ;
}
while(n > 9){
    n = n/10;
    k++;
}

int ans = (k-1)*10 + 9  - (k-1) + b;

if(n == 1){
    ans +=1 ;
}
cout << ans << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}