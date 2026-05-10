#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int func(vector<int>& ans, int index, vector<int> vec){
    int b = 1;
    for(int i=index+1; i<vec.size(); i++){
        if(vec[i] != vec[index]) break;
        b++;
    }

    int k = b - 1;
    if(b==1) return -1;
    int i = index;

    while(k--){
        ans.push_back(i + 2);
        i++;
    }
    
    ans.push_back(index+1);   
    return b;
}

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }
    

    int index = 0;
    vector<int> ans;
    
    while(index < vec.size()){
        int b = func(ans, index, vec);
        if(b == -1){
            cout << -1 << endl;
            return;
        }
        index += b;
    }

    for(int i=0; i<vec.size(); i++){
        cout << ans[i] << " ";
    }

    cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}