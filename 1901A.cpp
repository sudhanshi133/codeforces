#include <iostream>
#include <vector>
using namespace std;

void solve() {
    // Input
    int n,x; cin >> n >> x;

    vector<int> vec(n);
    for(auto &ele : vec){
        cin >> ele;
    }

    // Logic
    int maxi = vec.front();
    for (int i=0; i+1<n; i++) {
        int diff = vec[i+1] - vec[i];
        maxi = max(maxi, diff);
    }

    maxi = max(maxi, 2 * (x - vec.back()));

    cout << maxi << "\n";
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}