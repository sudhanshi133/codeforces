#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n, r, b;
    cin >> n >> r >> b;
    int reps = r/(b+1);
    string s;
    
    string red;
    for(int i=0; i<reps;i++){
        red+='R';
    }

    int remaining = r % (b+1);

    while(b>0){
        s+= red;
        s+= 'B';
        if(remaining){
            s+='R';
            remaining--;
            r--;
        }
        r-=(red.length());
        b--;
    }
    
    while(remaining > 0){
        s+= 'R';
        remaining--;
    }
    s+=red;
    
    cout << s << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}