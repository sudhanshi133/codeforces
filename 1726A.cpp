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

    int maxi = 0;

    for(int i=1; i<n; i++){
        maxi = max(maxi, vec[i] - vec[0]);
    }

    for(int i=0; i<n-1; i++){
        maxi = max(maxi, vec[n-1] - vec[i]);
    }

    for(int i=0; i<n-1; i++){
        maxi = max(maxi, vec[i] - vec[i+1]);
    }

    cout << maxi << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}