#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string>
using namespace std;

void solve() {
    long long n; cin >> n;
    string s = to_string(n);
    
    int maxi = 0;
    int start = s.size()- 1;

    while(start >= 0){
        if(s[start] == '5' || s[start] == '0'){
            break;
        }
            start--;
        }

    int end = start - 1;
    while(end >= 0){
        string k;
        k+= s[start];
        k+= s[end];

        if(k.size() > 0){
        int m = stoi(k);
       if(m % 25 == 0){
        break;
       }
    }
       end--;
    }

    cout<< (start - end - 1) + s.size() -1 - start << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}