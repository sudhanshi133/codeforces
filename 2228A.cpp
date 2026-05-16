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

    int zeroes = 0;
    int ones = 0;
    int twos = 0;

    for(int i=0; i<n; i++){
        if(vec[i] == 0) zeroes++;
        else if(vec[i] == 1) ones++;
        else twos ++;
    }

    int ans = zeroes;

    int mini = min(ones, twos);

    ans += mini + (ones - mini)/3 + (twos - mini)/3;
    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}