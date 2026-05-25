#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    int x; cin >> x;
    vector<long long> vec(n);
    long long sum = 0;
    long long totalSum = 0;

    for(auto &ele : vec){
        cin >> ele;
        totalSum += ele;
    }
    
    sort(vec.begin(), vec.end());

    int i=0, m=x;

   while(m>0){
        sum += vec[i];
        sum += vec[i+1];
        i+=2;
        m--;
    }

    long long maxsum = sum;
    int j = n-1;
    i = 2*x - 1;
    

    while(x){
        sum -= (vec[i] + vec[i-1]);
        sum += vec[j];
        maxsum = min(sum, maxsum);
        i-=2;
        j--;
        x--;
    }

    cout << totalSum - maxsum << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}