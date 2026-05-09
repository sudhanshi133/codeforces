#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    int x; cin >> x;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }

    int op = 0;
    int lower = (x*-1) + vec[0];
    int upper = x + vec[0];

    for(int i=0; i<n; i++){
        int a = (x*-1) + vec[i];
        int b = x + vec[i];

        if(b < lower){
            lower = a;
            upper = b;
            op++;
        }
        else if(a > lower && a > upper){
            lower = a;
            upper = b;
            op++;
        }
        else{
            lower = max(a, lower);
            upper = min(b, upper);
        }
    }

    cout << op;
    cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}