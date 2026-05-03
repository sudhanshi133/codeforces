#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    int maxi = 0;

    for(auto &ele : vec){
        cin >> ele;
    }

    for(int i=1; i<n; i++){
        int diff = vec[i] - vec[0];
        if(diff > maxi) maxi = diff;
    }

    for(int i=n-2; i>=0; i--){
        int diff = abs(vec[n-1] - vec[i]);
        if(diff > maxi) maxi = diff;
    }

    cout << maxi << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}