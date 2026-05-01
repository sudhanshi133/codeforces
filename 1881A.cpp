#include <iostream>
#include<string>
using namespace std;

void solve() {
int n,m; cin >> n >> m;
string x,s; cin >> x >> s;
bool flag = false;
int ans=0;
int count=6;

while(count--){
    if(x.find(s) != string::npos){
        flag = true;
        break;
    }
    ans++;
    x+=x;
}

if(flag) cout << ans;
else cout << -1;
cout << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}