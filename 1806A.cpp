#include <iostream>
using namespace std;

void solve() {
int a,b,c,d;
cin >> a >> b >> c >> d;

if(b>d){
    cout << -1 << endl;
    return;
}

if(b==d){
    if(a==c){
      cout << 0 << endl;
    }
    else if(a < c){
       cout << -1 << endl;
    }
    else{
      cout << a -c  << endl;
    }
    return;
}
else{
    int k = d - b;
    int ans = k;
    a = a + ans ;
    if(a >= c){
      ans += (a - c);
      cout << ans << endl;
    }
    else{
        cout << -1 << endl;
    }
}
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}