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
    
    int ans = -1;
    int result = vec[0];

    for(int i=1; i<n; i++){
        result ^= vec[i];
    }

    if(result == 0){
        cout << 0 << endl;
        return;
    } 

    int b = vec[0]^result;

    for(int i=1; i<n; i++){
        vec[i] = vec[i] ^ result;
        b ^= vec[i];
    }

    if(b==0) ans = result;
    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}