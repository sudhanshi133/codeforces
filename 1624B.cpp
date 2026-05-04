#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool func1(long long a, long long b, long long c){
long long diff = (c+a)/2;
if(b-a == c-b){
return true;
}
else {
    if((c+a) % 2 == 0 && diff % b == 0) return true;
}
return false;
}

bool func2(long long a, long long b, long long c){
   long long newC = 2*b - a;
   long long newA = 2*b - c;
   if(c<=newC && newC % c == 0) return true;
   else if(b<=newA && newA % a == 0) return true; 
return false;
}



void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    if(func1(a,b,c) || func2(a,b,c))  cout << "YES\n";
    else cout << "NO\n";
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}