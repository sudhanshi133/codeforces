#include <iostream>
#include<vector>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }
vector<int> ans(n);

for(int i = 0 ; i < n - 1 ; i++){
    int k = 0 ;
  for(int j = i + 1 ; j < n ; j++){
    if(vec[j] > vec[i] ){
        k++;
    }
  }
  int total_elements = n - 1 - i;
  int small = total_elements - k;
  if(small > k){
    ans[i] = small;
  }
  else{
    ans[i] = k;
  }
}

ans[n-1] = 0;
for(int i = 0 ; i < n-1 ; i++){
cout << ans[i] << " ";
}
cout << 0 << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}