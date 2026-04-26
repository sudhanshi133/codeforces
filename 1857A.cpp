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

    int odds=0, evens=0;

    for(int i=0; i<n; i++){
        if(vec[i]%2==0) evens++;
        else odds++;
    }

    if (odds % 2 == 0) cout << "YES\n";
    else cout << "NO\n";
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}