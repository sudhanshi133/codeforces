#include <iostream>
#include<algorithm>
using namespace std;

 void solve() {
    long long a,b;
    cin >> a >> b;

    if (a == b) {
        cout<< 0 << " " << 0 <<endl;
        return;
    }

    else if(abs(a-b) == 1){
        cout << 1 << " " << 0 << endl;
        return;
    }
    else{
    long long diff = abs(a - b);
    long long movesToLower = a % diff;
    long long movesToUpper = diff - movesToLower; 
    long long minMoves = min(movesToLower, movesToUpper);
    cout << diff << " " << minMoves << endl;
    return;
    }
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}