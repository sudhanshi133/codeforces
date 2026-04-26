#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;
vector<int> vec(n);

for(auto &ele : vec){
    cin >> ele;
}
int pos=0, neg=0, ans=0;

for(int i=0; i<n; i++){
    if(vec[i] == 1) pos++;
    else neg++;
}

n=n/2;

if(neg>n) {
    ans = neg-n;
    neg = neg - ans;
    if(neg%2!=0) ans++;
}
else{
    if(neg%2!=0) ans++;
}

cout << ans << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}