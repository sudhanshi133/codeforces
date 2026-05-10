#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> func(string s, int x){
    vector<int> ans;
    for(int i=0; i<= s.length() - x; i++){
        if(s[i] == 'B')  ans.push_back(i);
    }
    return ans;
}

int calc(int index, string s, int x){
    
}

void solve() {
    int n; cin >> n;
    int x; cin >> x;
    string s; cin >> s; 

    vector<int> black = func(s, x);
    int ans = INT_MAX;
    int k = -1;
    sort(black.begin(), black.end());

    for(int i=0; i < black.size(); i++){
        if(k+1 == black[i] && i!=0) continue;
        int len = calc(i, s, x);
        ans = min(ans, len);
        k = black[i];
    }

   cout << ans;
  cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}