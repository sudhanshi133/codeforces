#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool check(vector<int>& vec, int n, int skip){
    int i=0, j=n-1;
    while(i < j){
        if(vec[i] == vec[j]){ i++; j--; }
        else if(vec[i] == skip) i++;
        else if(vec[j] == skip) j--;
        else return false;
    }
    return true;
}

bool func(int i, int j, vector<int>& vec, int n){
    if(i >= j) return true;
    return check(vec, n, vec[i]) || check(vec, n, vec[j]);
}

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }
    
    int i=0, j=n-1;

    while(i<j){
        if(vec[i] != vec[j]) break;
        i++;
        j--;
    }

   bool flag = func(i,j, vec, n);

   if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}