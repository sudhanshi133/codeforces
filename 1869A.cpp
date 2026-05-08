#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }

    if(n%2==0){
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;

    }
    else{
        cout << 4 << endl;
        cout << 2 << " " << n << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << 2 << endl;
        cout << 1 << " " << 2 << endl;
    }
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}

// if there are even numbers of x = xor is 0
// else xor is 1 

// so for even we firslty make all of them as x -> then 0
// for odd we make 2-n as 0, then 1-2 we make 0 