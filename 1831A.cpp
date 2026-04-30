#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int func(vector<int>& arr, int sum, int element){
    int b = sum - element;
    b = min(b, (int)arr.size());
    for(int i=b-1; i>=0; i--){
        if(arr[i] != -1) return i;
    }
    return 0;
}
 
void func(vector<int>& vec,vector<int>& arr){
    int n = vec.size();
    vector<int> ans(n);
    ans[n-1] = n;
    arr[n-1] = -1;
    int sum = n + vec[n-1];
 
    for(int i=n-2; i>=0; i--){
        int a = func(arr, sum, vec[i]);  
        arr[a] = -1;
        ans[i] = a + 1; 
        sum = vec[i] + ans[i];    
    }
 
    for(int i=0; i<n; i++){
        cout << ans[i];
        if(i==n-1) cout << endl;
        else cout << " ";
    }
}
 
void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    vector<int> arr(n, 0);
 
    for(auto &ele : vec){
        cin >> ele;
    }
    func(vec, arr);
    return;
}
 
int main() {
    int t; cin >> t;
    while(t--) solve();
}