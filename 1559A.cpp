#include <iostream>
#include<vector>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    int ans = vec[0];
    for(int i=1; i<n; i++){
        ans = (ans & vec[i]);
    }

    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}