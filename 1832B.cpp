#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    int k; cin >> k;
    vector<long long> vec(n);
    long long totalSum = 0;

    for(auto &ele : vec){
        cin >> ele;
        totalSum += ele;
    }

    sort(vec.begin(), vec.end());

    long long removedSum = 0;
    for(int i = 0; i < 2*k; i++){
        removedSum += vec[i];
    }

    long long minRemoved = removedSum;  



    int left = 2*k - 1;  
    int right = n - 1;   

    for(int m = k-1; m >= 0; m--){
        removedSum -= vec[left];
        removedSum -= vec[left-1];
        left -= 2;
        removedSum += vec[right];
        right--;

        minRemoved = min(minRemoved, removedSum);
    }

    cout << totalSum - minRemoved << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
}
