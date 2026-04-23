#include <iostream>
#include<algorithm>
using namespace std;

// int func(long long n, long long m, long long row, long long col){
// if("right"){
// return -1;
// }
// else if("center"){
// return 0;
// }
// return 1;
// }

void solve() {
    long long n,m,row,col; 
    cin >> n >> m >> row >> col;
    long long a,b,x,y; 

    // if(func(n,m,row,col) == 1){
    //     a = 1;
    //     b = m;
    //     x = n;
    //     y = m;
    // } 
    // else if(func(n,m,row,col) == -1){
    //     a = 1;
    //     b = 1;
    //     x = n;
    //     y = 1;
    // }
    // else{
       a = 1;
       b = 1;
       x = n;
       y = m;
//    }

    cout << a << " " << b << " " << x << " " << y << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}