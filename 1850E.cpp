#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


long long area(long long w, vector<long long>& vec, long long c){
    long long sum = 0;
    for (long long s : vec) {
        long long side = s + 2 * w;
        sum += side * side;

    if (sum > c) return sum; 
    }
    return sum;
}

void solve() {
    int n; cin >> n;
    long long c; cin >> c;
    vector<long long> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }

    long long start = 1;
    long long end = 2e9;
    long long ans;
 
    while (start <= end) {
        long long mid = start + (end - start) / 2;
        long long val = area(mid, vec, c);

        if (val == c) {
            ans = mid;
            break;
        } 
        else if (val < c) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }


    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}