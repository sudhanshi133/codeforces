#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int func(string s, char c){
 int freq = 0;
 int f = 0;
 int start = 0;
 int end = s.length();

while(start<end){
    if(s[start] == c){
        f++;
    }
    else{
        freq = max(freq, f);
        f = 0;
    }
    start++;
}
freq= max(freq, f);
return freq;
}

void solve() {
  int n; cin >> n;
   string s;
   cin >> s;
   
   int a = func(s, '>');
   int b = func(s, '<');

   int maxi = max(a,b);

   cout << maxi + 1 << endl; 
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}