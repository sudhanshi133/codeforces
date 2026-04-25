#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

long long func(string s, long long index1, char a, char b){
        for(long long i=index1-1; i>=0; i--){
        if(s[i] == a || s[i] == b){
            return i;
        }
    }
    return 0;  
}

long long funcA(string s){
    long long index1;
    bool flag = false;
     for(long long i=s.length()-1; i>=0; i--){
        if(s[i] == '0'){
            index1 = i;
            flag = true;
            break;
        }
    }  
   if(flag){
    long long index2 = func(s, index1, '5', '0');
    long long reduced = s.length() - index2 - 2;
    return reduced;
   }
   return INT_MAX;
}

void solve() {
    long long n; cin >> n;
    string s = to_string(n);
    bool flag = false;
    long long index1 = 0;

    for(long long i=s.length()-1; i>=0; i--){
        if(s[i] == '0'){
            index1 = i;
            flag = true;
            break;
        }
        else if(s[i] == '5'){
            index1 = i;
            break;
        }
    }

    long long index2 = 0;
    long long reduced = 0;
    if(flag){
        index2 = func(s, index1, '0', '5');
        reduced = s.length() - index2 - 2;
    }
    else{
        index2 = func(s, index1, '2', '7'); 
        long long ans = funcA(s);
        reduced = s.length() - index2 - 2;
        reduced = min(reduced, ans);
    }

    cout << reduced << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}