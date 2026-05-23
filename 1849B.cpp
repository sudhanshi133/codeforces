#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n; 
    long long k;
    cin >> n >> k;

    vector<pair<long long, int>> vec(n);  // {hits, original_index}
    vector<long long> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        long long hits = (a[i] + k - 1) / k;
        vec[i] = {hits, i + 1};
    }

    sort(vec.begin(), vec.end(), [&](pair<long long,int> p, pair<long long,int> q){
        if(p.first == q.first){
            // same hits needed → larger original HP dies first
            if(a[p.second-1] != a[q.second-1])
                return a[p.second-1] > a[q.second-1];
            // same HP → smaller index dies first
            return p.second < q.second;
        }
        return p.first < q.first;
    });

    for(int i = 0; i < n; i++){
        cout << vec[i].second << " ";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}
