#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    int zeroes = 0;
    int ones = 0;

    for(int i=0; i<n; i++){
        cin >> vec[i];
        if(vec[i] == 0) zeroes++;
        if(vec[i] == 1) ones++;
    }

    int k = pow(2, zeroes);
    if(zeroes == 0) k = 1;
    int ans = k * ones;
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}