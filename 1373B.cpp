#include <iostream>
using namespace std;

void solve() {
string s; cin >> s;

int ones = 0;
int zeroes = 0;
for(int i = 0 ; i < s.length() ; i++){
    if(s[i] == '0'){
        zeroes++;
    }
    else{
        ones ++;
    }
}
int mini = min(zeroes, ones);

if(zeroes > 0 && ones > 0 && mini % 2 != 0){
    cout << "DA" << endl;
}
else{
    cout << "NET" << endl;
}
}

int main() {
int t; cin >> t;
while (t--) solve();
}