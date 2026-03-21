#include <iostream>
using namespace std;

void solve() {
long long int n,k,x;
cin >> n >> k >> x;

if( k==x && k!=1){
    cout << "NO" << endl;
    return;
} 
long long int sum = (n*(n+1))/2;

    if(sum < x) cout << "NO" << endl;
    else cout << "YES" << endl;

}

int main() {
int t; cin >> t;
while (t--) solve();
}