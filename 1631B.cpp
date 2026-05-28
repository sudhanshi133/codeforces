#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n);
    for(auto& ele : vec) cin >> ele;

    int ops = 0;
    int i = n-2;  // start from second last

    while(i >= 0){
        if(vec[i] != vec[n-1]){
            // need one operation of size k = (n-1-i)
            // this covers k elements to the left
            int k = (n-1) - i;
            i -= k;   // jump back by k
            ops++;
        }
        else i--;
    }

    cout << ops << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}
