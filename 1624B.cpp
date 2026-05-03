#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool func(long long a, long long b){
    long long smaller = min(a, b);
    long long larger = max(a, b);
    if (smaller == 0) {
        if (larger == 0) return true;
        else  return false;
    }

    if (larger % smaller == 0)   return true;
    return false;
}

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long diff1 = abs(b-a);
    long long diff2 = abs(c-b);

    if(diff2 == diff1){
        cout << "YES\n";
        return;
    }
    else if(func(diff1, diff2) || (a==1 && b>c)){
        cout << "YES\n";
        return;
    }
    else if(a==b || b==c){
        if((a==b && c!=1 && c!=3) || (b==c && a!=1)) cout << "NO\n";
        else cout << "YES\n";
        return;
    }
   cout << "NO\n";
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}