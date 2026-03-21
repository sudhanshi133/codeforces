#include <iostream>
using namespace std;

void solve() {
long long int n,x;
cin >> n >> x;

long long int b = n - (x+2);

if(b % x==0 || b%2==0 || n%2==0 || n%x==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}

int main() {
int t; cin >> t;
while (t--) solve();
}