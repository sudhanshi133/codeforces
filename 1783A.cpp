#include <iostream>
#include<vector>
#include<algorithm>
#include <functional>
using namespace std;

void solve(){
int n; cin >> n;
vector<int> vec(n);

for(auto &ele : vec){
    cin >> ele;
}

sort(vec.begin(), vec.end(), greater<int>());
int d= 0;

for(int i=1 ;i<n ;i++){
 if(vec[0] == vec[i]) d++;  
 else break;
}

if(d==n-1 && n!=1){
    cout << "NO" << endl;
    return;
}
cout << "YES" << endl;

for(int i=d; i<n-1; i++){
    cout << vec[i] << " ";
}
cout << vec[n-1];

if(d==0) {
    cout << endl;
    return;
}
else cout << " ";

for(int i=0; i<d-1; i++){
    cout << vec[0] << " ";
}
cout << vec[0] << endl; 
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}