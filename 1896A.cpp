#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;
vector<int> vec(n);

for(auto &ele : vec){
cin>>ele;
}

if(vec[0] == 1) cout << "YES"<< endl;
else cout << "NO" << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}