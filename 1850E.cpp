#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


long long func(long long mid, vector<long long>& vec, long long x){
   
}

void solve() {
    int n; cin >> n;
    long long x; cin >> x;
    vector<long long> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }

    long long start = 1;
    long long end = 2e9;
    long long ans;
 
    while(start<=end){
        int mid = start + (end-start)/2;
        if(func(mid, vec, x)){
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}