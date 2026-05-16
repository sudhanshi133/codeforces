#include <iostream>
using namespace std;

void solve() {
    long long n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    long long diff = abs(x1 - x2);
    long long a = diff;         
    long long b = n - diff;       

if(a+k>=b){
    cout<<b; 
} else {
    cout<<a+k;
}
 
cout << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}
