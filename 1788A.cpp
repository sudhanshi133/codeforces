#include <iostream>
using namespace std;

void solve() {
int n; cin >> n;

vector<int> vec(n);
for(auto &ele : vec){
    cin >> ele;
}

int twos = 0 ;
int ones = 0 ;
int ans = 0;
for(int i = 0 ; i< n;i++){
   if(vec[i] == 1){
    ones++;
   }
   else{
    twos++;
   }
}

if(twos % 2 != 0){
    cout<<-1<<endl;
    return;
}
if(ones == n){
    cout<<1<<endl;
    return;
}

twos = twos/2;
for(int i = 0 ; i< n ;i++){
if(vec[i] == 2){
    twos --;
}
if(twos == 0){
    ans = i+1;
    break;
}
}
cout << ans << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}