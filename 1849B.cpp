#include <iostream>
#include<vector>
#include<algorithm>
#include <queue>
using namespace std;

struct CustomCompare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second > b.second; 
        }
        return a.first < b.first;
    }
};

void solve() {
    int n; cin >> n;
    int x; cin >> x;
    vector<int> vec(n);
    vector<int> ans;
    priority_queue<pair<int, int>, vector<pair<int, int>>, CustomCompare> pq;


    for(int i=0; i<n; i++){
        cin >> vec[i];
        pq.push({vec[i], i});
    }

    while(!pq.empty()){
        pair<int, int> current = pq.top();
         pq.pop();
        current.first -= x;


        if(current.first <= 0){
            ans.push_back(current.second + 1);
        }
        
        if(current.first > 0) pq.push({current.first, current.second});
    }


    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }

    cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}