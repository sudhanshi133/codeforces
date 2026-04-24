#include <iostream>
#include<algorithm>
using namespace std;


void solve() {
    long long n,m,row,col; 
    cin >> n >> m >> row >> col;
    long long a,b,x,y; 

       a = 1;
       b = 1;
       x = n;
       y = m;

       cout << a << " " << b << " " << x << " " << y << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}