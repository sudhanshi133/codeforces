#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


// first one is bigger num
void func(long long a, long long b){
    long long c = 0;
    if(a>b) c = a/b;
    else c = b/a;

    if(a>b && a%b!=0){
        cout << -1 << endl;
        return;
    }
    else if(a<b && b%a!=0){
        cout << -1 << endl;
        return;
    }

    if(c%2!=0){
        cout << -1 << endl;
        return;
    }

    long long ans = 0;

    while(c>1){
        if(c%8==0) c /= 8;
        else if(c%4==0) c/= 4;
        else if(c%2==0) c/=2;

        else{
            cout << -1 << endl;
            return;
        }
        ans++;
    }

    cout << ans << endl;
}

void solve() {
    long long a, b;
    cin >> a >> b;
    if(a==b){
        cout << 0 << endl;
        return;
    }

    func(a,b);
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}