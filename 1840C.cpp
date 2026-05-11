#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int func(int x){

}

void solve() {
    int n; cin >> n;
    int k; cin >> k; 
    int q; cin >> q;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }

    int start = 0;
    int end = 0;
    int ans = 0;
    int window = 0;

    while(end < n){
        if(vec[end] < q){
            window++;
        }
        else{
            ans += func(window);
            window = 0;
            start = end + 1;
        }
        end++;
    }

    if(window) ans+= func(window);
    
    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}