#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;
vector<int> vec(n);

for(int i = 0 ; i < n ; i++){
    int a ;
    cin>>a;
    if(a<0){
        a = a*-1;
    }
    vec[i] = a;
}

int ans = vec[0];
for(int i = 1; i < n; i++){
    if(vec[i] < ans){
        ans = vec[i];
    }
}

cout<<ans<<endl; 
}

int main() {
// int t; cin >> t;
// while (t--) 
solve();
}