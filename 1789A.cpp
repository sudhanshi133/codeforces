#include <iostream>
#include <algorithm>
#include <numeric>
#include<vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool func(vector<int> vec, int n){

    for(int i=0; i<n; i++){
       for(int j=i+1; j<n; j++){
           if(gcd(vec[i], vec[j]) <= 2) return true;
       }
    }
    return false;
}

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    if(func(vec, n)) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}


// for all prefixes the gcd should be less than length
// we find the min gcd , because addign new numbers would only make gcd smaller
// as min length was 2 , we searched if there exists any pair whose gcd is less 
//than or equal to 2