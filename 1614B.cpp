#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> vec(n);
    vector<long long> ans(n+1);
    ans[0] = 0;
    long long minDis = 0;

    for(auto &ele : vec){
        cin >> ele;
    }

    vector<pair<long long,long long>> nums(n);
    for(long long i = 0; i < n; i++) nums[i] = {vec[i], i};
    sort(nums.begin(), nums.end(), greater<pair<long long,long long>>());

    long long pos = 1;
    long long neg = -1;
    bool flag = true;

    for(auto &p : nums){
        long long a = p.first;
        long long b = p.second + 1;
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
