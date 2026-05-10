#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    int x; cin >> x;
    string s; cin >> s; 

    int black = 0;

    for(int i=0; i<s.length(); i++){
        if((x==1 && s[i] =='B') || x==0){
            cout << 0 << endl;
            return;
        }
    }

    for(int i=0; i<x; i++){
        if(s[i] == 'B') black++;
    }
    
    if(black == x){
        cout << 0 << endl;
        return;
    }

    int i = 1;
    int j = x;
    int ans = x - black;

    while(i<j && j<s.length()){
        if(s[j] == 'B') black++;
        if(s[i-1] == 'B') black--;
        ans = min(x-black, ans);
        i++;
        j++;
    }

    cout << ans;
    cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}