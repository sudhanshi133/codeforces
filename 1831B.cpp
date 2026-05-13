#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);

    for(auto &ele : arr1){
        cin >> ele;
    }

    for(auto &ele : arr2){
        cin >> ele;
    }
    
    int ans = 0;

    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}