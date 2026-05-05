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

    if(vec[0] == 1) vec[0]+= 1;

    for(int i=1; i<n; i++){
        if(vec[i] == 1) vec[i]+=1;
        if(vec[i] % vec[i-1] == 0){
            vec[i]++;
        }
    }

    for(int i=0; i<n; i++){
        cout << vec[i];
        if(i==n-1) cout << endl;
        else cout << " ";
    }

    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}