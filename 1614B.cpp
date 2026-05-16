#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    vector<int> ans(n+1);
    ans[0] = 0;
    int minDis = 0;

    for(auto &ele : vec){
        cin >> ele;
    }

    vector<pair<int,int>> nums(n);
    for(int i = 0; i < n; i++) nums[i] = {vec[i], i};
    sort(nums.begin(), nums.end(), greater<pair<int,int>>());


    int pos = 1;
    int neg = -1;
    bool flag = true;

for(auto &p : nums){
    int a = p.first;
    int b = p.second + 1;
    if(flag) {
        ans[b] = pos;
        minDis += 2 * a * pos; 
        pos++;
    }
    else{
        ans[b] = neg;
        minDis += 2 * a * abs(neg); 
         neg--;
    }
    flag = !flag;
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