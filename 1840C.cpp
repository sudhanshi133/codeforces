#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long func(long long x, long long k){
    if(k>x) return 0;
    long long len = x - k + 1;
    return (len * (len + 1)) / 2;
}

void solve() {
    long long n; cin >> n;
    long long k; cin >> k; 
    long long q; cin >> q;
    vector<long long> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }

    long long start = 0;
    long long end = 0;
   long long ans = 0;
    long long window = 0;

    while(end < n){
        if(vec[end] <= q){
            window++;
        }
        else{
            ans += func(window, k);
            window = 0;
            start = end + 1;
        }
        end++;
    }

    if(window) ans+= func(window, k);
    
    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}