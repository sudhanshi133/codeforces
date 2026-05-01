#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }
    
    int ans = 0;

    cout << ans << " ";
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}