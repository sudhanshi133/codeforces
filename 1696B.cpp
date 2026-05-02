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

    int nonZeroSegments = 0;
    int ele = 0;
    int i=0;

    while(i<n){
        if(vec[i] == 0 && ele>0){
            ele = 0;
            nonZeroSegments++;
        }
        else if(vec[i]!=0) ele++;
        i++;
    }

    if(ele!=0) nonZeroSegments++;
    if(nonZeroSegments > 2) nonZeroSegments = 2; 
    cout << nonZeroSegments << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}