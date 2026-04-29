#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// if i have numbers from 2 to k
void func(int n, int k, int x){
    if(k == 1 || (k==2 && n%2!=0)){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout << n/2 << endl;
    for(int i=0; i<n/2-1; i++){
        cout << 2 << " ";
    }  
   if(n%2 == 0) cout << 2 << endl;
   else cout << 3 << endl; 
}

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    if(x!=1){
        cout << "YES" << endl;
        cout << n << endl;
        while(n--){
        cout << 1 << " ";
      }
      cout << endl;
    }

    else func(n,k,x);

    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}