#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n; 
    long long k;
    cin >> n >> k;
    
    vector<pair<long long,int>> a(n);
    
    for(int i = 0; i < n; i++){
        long long m; cin >> m;
        long long b = m % k;
        if(b==0)b=k;
        a[i] = {b, i+1};
    }

    sort(a.begin(), a.end(), [](auto& x, auto& y){
    if(x.first != y.first)
        return x.first > y.first;
    return x.second < y.second;
});

    for(int i = 0; i < n; i++){
        cout << a[i].second << " ";   
    }

    cout << "\n";
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}
