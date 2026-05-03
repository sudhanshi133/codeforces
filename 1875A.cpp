#include <iostream>
#include<vector>
using namespace std;

void solve() {
    int a,b;
    cin >> a >> b;
    int n; cin >> n;

    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }
    long long sum = b-1;

    for(int i=0; i<n; i++){
        sum += min(a, vec[i] + 1);
    }

    cout << sum - (n-1) << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}