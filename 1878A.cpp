#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;
int k; cin >> k;
vector<int> vec(n);

for(auto &ele : vec){
    cin >> ele;
}

bool flag = false;

for(int i = 0 ; i < n ; i ++){
    if(vec[i] == k){
        flag = true;
        break;
    }
}
flag ? (cout << "YES" << endl) : (cout << "NO" << endl);
}

int main() {
int t; cin >> t;
while (t--) solve();
}