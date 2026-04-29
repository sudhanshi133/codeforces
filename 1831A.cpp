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

    sort(vec.begin(), vec.end());

    for(int i=0; i<n; i++){
        cout << vec[i];
        if(i==n-1) cout << endl;
        else cout << " ";
    }
    
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}