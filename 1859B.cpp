#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> second;
    int mini = INT_MAX;

    while(n--){
        int k;
        cin >> k;
        vector<int> vec(k);
        for(auto &ele : vec) cin >> ele;
        sort(vec.begin(), vec.end());
        mini = min(mini, vec[0]);
        second.push_back(vec[1]);
    }

    long long ans = 0;
    sort(second.begin(), second.end());
    ans += mini;
    for(int i=1; i<second.size(); i++){
        ans += second[i];
    }

    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}