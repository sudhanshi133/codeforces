#include <iostream>
using namespace std;

void solve() {
int n; cin >> n;
int ans = 0;
int count = 0;

if(n<10){
    cout << n << endl;
    return;
}

while(n>9){
    count ++;
    ans+=10;
    n/=10;
}

ans+=n;
ans = ans - count;

cout << ans << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}