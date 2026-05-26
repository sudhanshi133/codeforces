#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void func(vector<int>& res, int k){
    for(int i=0; i<51; i++){
        if(res[i] < k) res[i] ++;
    }
}

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
    int prev = -1;

    for(int i=0; i<m; i++){
       int b =  res[queries[i]];
       ans[i] = b;

       if(prev == queries[i]) ans[i] = 1;
       else func(res, b);

       res[queries[i]] = 1;
       prev = queries[i];
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