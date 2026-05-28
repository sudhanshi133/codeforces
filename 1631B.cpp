#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int func(vector<int>& vec, int n){
    int maxLen = 1;
    int currLen = 1;

    for(int i = 1; i < n; i++){
        if(vec[i] == vec[i-1]){
            currLen++;
            maxLen = max(maxLen, currLen);
        }
        else  currLen = 1;
    }
    return maxLen;
}

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }
    
    int maxi = func(vec, n);


    if(maxi == n) {
        cout << 0 << endl;
        return;
    }

    int left = n - maxi;
    int ans = 0;

    while(left > 0){
        left -= maxi;
        maxi *= 2;
        ans ++;
    }

   cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}