#include <iostream>
#include<vector>
using namespace std;

void solve() {
    long long n; cin >> n;
    long long k; cin >> k;
    long long m = n*k;
    vector<long long> vec(m);

    for(int i=0; i<m; i++){
        cin >> vec[i];
    }

    long long median = 0;
    long long b = n/2;
    long long end = m-b-1;
    
    while(k--){
        median += vec[end];
        end -= (b+1);
    }

    cout << median << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}