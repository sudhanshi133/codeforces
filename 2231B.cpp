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

    int mini = 0;

    for(int i=1; i<n; i++){
        if(vec[i] < vec[i-1]) {
            mini = max(vec[i-1] - vec[i], mini);
        }
    }

    for(int i=1; i<n; i++){
        if(vec[i] < vec[i-1]) vec[i] += mini;
        if(vec[i] < vec[i-1]){
        cout << "NO" << endl;
        return;
        }
    }

    cout << "YES" << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}