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
   
    int mini = INT_MAX;

    for(int i=0; i<n; i++){
        if( vec[i] != i+1 && mini > abs(vec[i] - (i+1))) mini = abs(vec[i] - (i+1));
    }

    cout << mini << endl;

    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}