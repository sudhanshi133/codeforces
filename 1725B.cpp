#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool func(int required, int i, int j){
    return required <= j-i+1;
}

void solve() {
    int n; cin >> n;
    int d; cin >> d;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }

    int ans = 0;
   int i = 0;
    sort(vec.begin(), vec.end());
    if(vec[0] > d){
        cout << n << endl;
        return;
    }

    for(int j=n-1;j>=0 && i<j; j--){
        int req  = d/vec[j] + 1;
            if(func(req, i, j)) i+= (req-1);
            else break;
            ans++;
    }

    cout << ans;
    cout << endl;
    return;
}

int main() {
    solve();
}