#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> vec(n), queries(m);

    for(auto &ele : vec) cin >> ele;
    for(auto &ele : queries) cin >> ele;
    
    vector<int> res(51, -1);

    for(int i=0; i<n; i++){
       if(res[vec[i]] == -1) res[vec[i]] = i+1;
    }

    vector<int> ans(m);
    int k = 0;

    for(int i=0; i<m; i++){
       int b =  res[queries[i]];
       if(b==1) ans[i] = b;
       else ans[i] = b+k;
       
        if(b!=1) k++;
        res[queries[i]] = 1;
    }

    for(int i=0; i<m; i++){
        cout << ans[i];
        if(i!=m-1) cout << " ";
    }

    cout << endl;
    return;
}

int main() {
   // int t; cin >> t;
    solve();
}