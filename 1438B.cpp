#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void solve() {
    int n; cin >> n;

    set<int> seen;
    bool duplicate = false;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(seen.count(x)) duplicate = true;
        seen.insert(x);
    }

    cout << (duplicate ? "YES" : "NO") << "\n";   
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}