#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;

vector<int> vec(n);

for(auto &ele : vec){
    cin >> ele;
}
int mini = INT_MAX;

for(int i = 1 ; i < n ; i++){
if(vec[i-1] > vec[i]){
    cout << 0 << endl;
    return;
}
else{
    mini = min(vec[i] - vec[i-1], mini);
}
}
cout << mini/2 + 1 << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}