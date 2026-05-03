#include <iostream>
#include<vector>
using namespace std;

bool func(string a, string b, vector<int>& vec, vector<int>& vec1){
int i=0, j=0;
while(i<a.length() && j<b.length()){
    if(a[i] == b[j]){
        if(vec[a[i] - 'A'] == vec1[a[i] - 'A']){
            vec1[a[i]- 'A']--;
            j++;
        }
        else if(vec[a[i] - 'A'] < vec1[a[i] - 'A']) return false;
    }
    vec[a[i] - 'A']--;
    i++;
}
 return j == b.length();
}

void func1(string x, vector<int>& vec){
    for(int i=0; i<x.length(); i++){
        vec[x[i] - 'A']++;
    }
}

void solve() {
    string s, x;
    cin >> s >> x;

    vector<int> vec(26, 0);
    vector<int> vec1(26, 0);
    func1(s, vec);
    func1(x, vec1);

   if(func(s, x, vec, vec1)) cout << "YES\n";
   else cout << "NO\n";
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}