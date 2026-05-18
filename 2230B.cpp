#include <iostream>
#include <algorithm>
using namespace std;

int func4(string s){
    int b = 0;
    for(char c : s)
        if(c == '4') b++;
    return b;
}

int func1(string s){
    bool seen13 = false;
    int count = 0;
    for(char c : s){
        if(c == '1' || c == '3') seen13 = true;
        if(c == '2' && seen13) count++;
    }
    return count;
}

int func2(string s){
    bool seen2 = false;
    int count = 0;
    for(int i = s.length()-1; i >= 0; i--){
        if(s[i] == '2') seen2 = true;
        if((s[i] == '1' || s[i] == '3') && seen2) count++;
    }
    return count;
}

void solve() {
    string s;
    cin >> s;
    if(s.length() == 1){
        if(s[0] == '4'){
            cout << 1 << endl;
        }
        else cout << 0 << endl;
        return;
    }

    long long ans = func4(s);

    // remove all 4s
    s.erase(remove(s.begin(), s.end(), '4'), s.end());

    int a = func1(s);
    int b = func2(s);
    ans += min(a, b);

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
}
