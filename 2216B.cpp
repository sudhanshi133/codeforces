#include <iostream>
#include<algorithm>
using namespace std;

void solve() {
long long t, h, u;
cin >> t >> h >> u;

if(t == h && h == u){
long long ans = 7 * t;
cout << ans << endl;
return;
}
else if(t == 0){
   cout << 3 * (h + u) << endl;
}
else if(h==0 && u==0){
   long long k = t%2;
   long long ans = 0 ;
   if(k==0){
    ans = 5 * (t/2);
   }
   else{
    ans = 5 * (t/2) + 3;
   }
   cout << ans << endl;
}
else if(h==0){
    long long k = abs(t - u);
    long long ans = 4 * min(t, k);
    ans += k*3;
    cout << ans << endl;
}
else if(u==0){
    long long k = abs(t - h);
    long long ans = 5 * min(t, h);
    ans += k*3;
    cout << ans << endl;
}
else if(h==0 || u==0){
    cout << 2 * (h + u) << endl;
}
else{
    bool flag = false;
    if(t > u){
        flag = true;
    }
    long long ans = 0;

    if(flag){
        ans = 4 * u;
        t = t - u;
    }
    else{
        ans = 4 * t;
        u = u - t;
    }
    if(t > 0){
        if(t%2==0){
            ans += 5 * t;
            t = 0;
        }
        else{
            ans += 5 * t;
            t = 1;
        }
    }
    if(t == 1){
        if(h >= 1){
            ans += 5;
            h = h - 1;
        }
    }
    ans += 3 * (h + u);
    cout << ans << endl;
}
return;
}

int main() {
int t; cin >> t;
while (t--) solve();
}
