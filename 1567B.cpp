#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long xorUpTo(long long n){
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}

void solve() {
    long long a, b;
    cin >> a >> b;

    long long result = xorUpTo(a - 1); 

    if(result == b){
        cout << a << "\n";
    }
    else {
        long long x = result ^ b; 
        if(x != a){
            cout << a + 1 << "\n";
        }
        else {
            cout << a + 2 << "\n";
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}

// in this we have to anyways take a numbers because of mex
// then after this, we can take a number (x^b) but this should not be equal
// to a
// if not then ans is simply a+1
// else ans is a + 2
// because we add (1^x^b) and 1 to the array (x and x cancels out)
// 1 and 1 cancels out 