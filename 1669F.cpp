#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int compare(vector<long long>& vec1, vector<long long>& vec2, int n){
    int ans = 0;
    int i=0, j=0;

    while(i<n-1 && j<n-1 && (i+j+1) < n){
        if(vec1[i] < vec2[j]) i++;
        else if(vec1[i] > vec2[j]) j++;
        else {
            ans = max(ans, i+j+2);
            i++;
            j++;
        }
    }

    return ans;
}

vector<long long> sum1(vector<int>& vec, int n){
    vector<long long> ans;
    long long sum = 0;
    for(int i=0; i<n-1; i++){
        sum += vec[i];
        ans.push_back(sum);
    }
    return ans;
}

vector<long long> sum2(vector<int>& vec, int n){
    vector<long long> ans;
    long long sum = 0;
    for(int i=n-1; i>0; i--){
        sum+= vec[i];
        ans.push_back(sum);
    }
    return ans;
}

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }
    
    vector<long long> prefix = sum1(vec, n);
    vector<long long> sufix = sum2(vec, n);

    cout << compare(prefix, sufix, n) << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}