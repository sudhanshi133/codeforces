#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
   for(int i =0; i<n; i++){
    cout << i;
    if(i!=n-1) cout << " ";
   }

cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}