#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    vector<int> ans(n);

    for(auto &ele : vec){
        cin >> ele;
    }
    
    for(auto &p : ans){
        cout << p << " ";
    }

    cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}