#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

bool works(vector<long long>& vec, long long d, int start){
    for(int i = start; i < vec.size(); i += 2){
        if(vec[i] % d == 0) return false;
    }
    return true;
}

void solve(){
    int n; cin >> n;
    vector<long long> vec(n);
    for(auto& ele : vec) cin >> ele;

    // GCD of even-indexed (0,2,4...)
    long long g1 = 0;
    for(int i = 0; i < n; i += 2) g1 = gcd(g1, vec[i]);

    // GCD of odd-indexed (1,3,5...)
    long long g2 = 0;
    for(int i = 1; i < n; i += 2) g2 = gcd(g2, vec[i]);

    if(works(vec, g1, 1)){
        cout << g1 << "\n";
        return;
    }

    if(works(vec, g2, 0)){
        cout << g2 << "\n";
        return;
    }

    cout << 0 << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}
