#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;
vector<int> vec(n);

for(auto &ele : vec){
cin>>ele;
}

bool flag = true;


if(flag){
cout << "YES"<< endl;
}
else{
cout << "NO" << endl;
}
}

int main() {
int t; cin >> t;
while (t--) solve();
}