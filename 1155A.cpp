#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> vec(n);
    vec[n-1] = n-1;

    for(int i=n-2; i>=0; i--){
        int b = vec[i+1];
        if(s[b] > s[i]) vec[i] = i;
        else vec[i] = b;
    }

    for(int i=0; i<n; i++){
        if(s[vec[i]] < s[i] && vec[i]!=i){
            cout << "YES" << endl;
            cout << i+1 << " " << vec[i]+1 << endl;
            return;
        } 
    }

    cout <<"NO";
    cout << endl;
    return;
}

int main() {
    solve();
}