#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    vector<int> ans(n+1);
    int minDis = 0;

    for(auto &ele : vec){
        cin >> ele;
    }

    
    cout << minDis << endl;
    for(int i=0; i<=n; i++){
        cout << ans[i] << " ";
    }

    cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}