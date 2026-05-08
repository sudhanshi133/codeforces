#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> storeIndexes(char c, string s){
vector<int> ans;
for(int i=0; i<s.length();i++){
    if(s[i] == c) ans.push_back(i);
}
return ans;
}

void solve() {
   int n; cin >> n;
   char c; cin >> c;
   string s; cin >> s;
   if(c=='g'){
    cout << 0 << endl;
    return;
   }
   vector<int> red = storeIndexes(c,s);
   vector<int> green = storeIndexes('g',s);
   int p1 = 0;
   int diff = 0;

   for(int i=0; i<red.size(); i++){
    int k = 0;
    int ele = green[p1];
    if(green[p1] < red[i]){
    while(green[p1] < red[i] && p1<green.size()){
         p1++;
        }
    }

    if(p1 == green.size()){
        p1 = 0;
        k = n - red[i] + green[p1];
    }
    else{
        k = abs(green[p1] - red[i]);
    }
    diff = max(diff, k);
}

cout << diff;
cout << endl;

    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}