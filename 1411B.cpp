#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isFair(long long x){
    long long temp = x;
    while(temp > 0){
        int digit = temp % 10;
        if(digit != 0 && x % digit != 0) return false;
        temp /= 10;
    }
    return true;
}

void solve() {
    long long n; cin >> n;
    while(!isFair(n)) n++;
    cout << n << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}
