#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);

    for(auto &ele : arr){
        cin >> ele;
    }

    int ans = 0;

    for(int i = 0; i < n-1; i++){
      if(((arr[i] % 2) and (arr[i+1]%2)) or ((arr[i]%2 == 0) and (arr[i+1]%2 == 0))){
        ans++;
      }
    }
    
    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}