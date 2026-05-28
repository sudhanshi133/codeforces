#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void solve() {
    int n; cin >> n;
    int k; cin >> k;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }

set<int> s(vec.begin(), vec.end());

    for(auto x : s){
        if(s.count(x + k)){
            cout << "YES\n";
            return;
        }
    }

cout << "NO" << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}