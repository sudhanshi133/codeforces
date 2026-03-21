#include <iostream>
using namespace std;

void solve() {
    long long int n; cin >> n;
    if(n % 2 != 0 || n < 4){
        cout << -1 << endl;
        return;
    }
    long long int maxi = 0;
    long long int mini = 0;
        maxi = n/4;

        mini = n/6;
        int k = n % 6;
        if(k == 2 || k == 4){
           mini++;
        }
     cout << mini << " " << maxi << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}