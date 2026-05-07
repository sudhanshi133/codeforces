#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int gcd(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int func(vector<int>& arr, vector<int>& vec, int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        int diff = abs(vec[i] - (i + 1));
        ans = gcd(ans, diff);
    }
    return ans;
}

void solve() {
    int n; 
    cin >> n;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }
   
    vector<int> arr(n, 0);
    int ans = func(arr, vec, n);

    cout << ans << endl;
}

int main() {
    int t; 
    cin >> t;
    while (t--) solve();
}
