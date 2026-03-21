#include <iostream>
using namespace std;

void solve() {
int x; cin >> x;
int k; cin >> k;
int start = x - 1;
int end = 1;
int ans = 0;

if(x % k != 0){
    cout << 1 << endl;
    cout << x << endl;
    return;
}
while(end > 0){
    if(start % k != 0 && end % k !=0 ){
        break;
    }
    start--;
    end++;
}
cout << 2 << endl;
cout << end << " " << start << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}