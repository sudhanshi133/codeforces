#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;

vector<int> vec(n);
vector<int> ans;

for(auto &ele : vec){
    cin >> ele;
}
if(n > 0){
int k = n ;
ans.push_back(vec[0]);
int b = vec[0];

for(int i = 1; i < n; i++){
if(vec[i] < b){
    ans.push_back(vec[i]);
    k++;
}
 ans.push_back(vec[i]);
 b = vec[i];
}

cout << k << endl;
for(int i =0 ; i < k - 1 ; i++){
    cout << ans[i] << " ";
}
cout<< ans[k-1] << endl;
}
}

int main() {
int t; cin >> t;
while (t--) solve();
}