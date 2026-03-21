#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;
int k; cin >> k;
string s; cin >> s;

vector<int> vec(26);
for(int i = 0; i < n; i++){
    vec[s[i]- 'a']++;
}
int b = 0;
for(int i = 0; i < 26 ; i++){
    if(vec[i] % 2 != 0){
        b++;
    }
}

if( b-1 > k){
    cout << "NO" << endl;
}
else{
    cout << "YES" << endl;
}
}

int main() {
int t; cin >> t;
while (t--) solve();
}