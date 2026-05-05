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

    if(n==1){
        cout << 0 << endl;
        return;
    }

    int o = 0;

    for (int i = n - 1; i > 0; i--) {
        while (vec[i - 1] >= vec[i]) {
            // this is the case if both elements are 0
            if (vec[i - 1] == 0) {
                cout << -1 << endl;
                return;
            }
            vec[i - 1] /= 2;
            o++;
        }
    }

    cout << o << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}