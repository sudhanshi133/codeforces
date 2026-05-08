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

    if(n%2==0){
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;

    }
    else{
        cout << 4 << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << 2 << endl;
        cout << 1 << " " << 2 << endl;
        cout << 1 << " " << n << endl;
    }
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}