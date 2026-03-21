#include <iostream>
using namespace std;

void solve() {
int a,b,c;
cin >> a >> b >> c;

if(c%2==0){
if(a>b){
  cout << "First" << endl;
}
else{
  cout << "Second" << endl;
}
} else{
if(a>=b){
  cout << "First" << endl;
}
else{
  cout << "Second" << endl;
}
}
}

int main() {
int t; cin >> t;
while (t--) solve();
}