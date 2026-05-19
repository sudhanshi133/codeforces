#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> getMaxFreq(vector<int>& arr, int n) {
    vector<int> freq(2 * n + 1, 0);
    int i = 0;
    while (i < n) {
        int x = arr[i];
        int count = 0;
        while (i < n && arr[i] == x) {
            count++;
            i++;
        }
        freq[x] = max(freq[x], count);
    }
    return freq;
}

void solve() {
    int n; cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);

    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }

  for(int i=0; i<n; i++){
        cin >> arr2[i];
    }
    
    int ans = 1;
    vector<int> res1 = getMaxFreq(arr1, n);
    vector<int> res2 = getMaxFreq(arr2, n);

    for(int i=0; i<2*n+1; i++){
        ans = max(ans, res1[i] + res2[i]);
    }

   cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}