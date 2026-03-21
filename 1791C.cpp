#include <iostream>
#include<string>
using namespace std;

void solve() {
int n; cin >> n;
string s; cin>>s;
int start = 0;
int end = n-1;

while(start <= end){
int a = (int)s[start];
int b = (int)s[end];
if(a==b){
    break;
}
start++;
end--;
}

cout << end - start + 1 << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}