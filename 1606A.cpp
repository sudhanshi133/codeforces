#include <iostream>
using namespace std;

int func(string s, string target){
bool f = false;
int c = 0;
for(int i=0; i<s.length(); i++){
    if(s[i] == target[0]) f=true;
    else if(f && s[i] == target[1]){
        f = !f;
        c++;
    }
    else f = false;
}
return c;
} 

string solve1(string s, string t){
    s[0] = s[s.length() - 1];
    return s;
}

void solve() {
    string s; cin >> s;
    string ans = s;

    int ab = func(s, "ab");
    int ba = func(s, "ba");

    int diff = ab-ba;

    // passing the majorly occuring string
    if(diff == 0) cout << s << endl;
    else if(diff > 0) cout << solve1(s, "ab") << endl; 
    else cout << solve1(s, "ba") << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}