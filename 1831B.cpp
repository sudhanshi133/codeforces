#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    vector<int> vec1(2*n);
    vector<int> vec2(2*n);

    for(int i=0; i<n; i++){
        cin >> arr1[i];
        vec1[arr1[i] - 1]++;
    }

  for(int i=0; i<n; i++){
        cin >> arr2[i];
        vec2[arr2[i] - 1]++;
    }
    
    int ans = 1;

    for(int i=0; i<2*n; i++){
       // cout << vec1[i] << " " << vec2[i] << endl;
      if(vec1[i] > 0 && vec2[i] > 0)  ans = max(ans, vec1[i] + vec2[i]);
    }
   // cout << endl;

   cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}