#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void solve() {
    int n; cin >> n;
    int x; cin >> x;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }

set<int> s(vec.begin(), vec.end());
vector<int> result(s.begin(), s.end());

if(result.size() == 1){
    if(x==0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return;
}

long long sum = 0;
int k = result.size();

for(int i=0; i<k-1; i++){
    for(int j=i+1; j<k; j++){
        if(result[j] - result[i] == x){
            cout << "YES" << endl;
            return;
        }
    }    
}
cout << "NO" << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}