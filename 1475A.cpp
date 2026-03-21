#include <iostream>
using namespace std;

void solve() {
    long long int n; cin >> n;
    bool flag = false;

    if( n==1 || n==2){
        cout << "NO" << endl;
        return;
    }
   

    if(n%2 != 0){
        cout << "YES" << endl;
        return;
    }

    for(long long int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            if(i % 2 != 0 && i!=1){
                flag = true;
                break;
            }

            if(i != n / i) {
                if ((n / i) % 2 != 0 && i!=1){
                    flag = true;
                    break;
                }
            }
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}