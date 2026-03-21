#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

void solve() {
int n; cin >> n;
int k; cin >> k;
vector<int> vec(n);

for(auto &ele : vec){
    cin >> ele;
}

if(n <= 1){
    cout << 0 << endl;
    return;
}

int maxi = 0;
int maxAns = 1;
sort(vec.begin(), vec.end());

int start = 0;
int end = 1;

while(start <= end && end < n){
if(vec[end] - vec[end-1] > k){
   start = end; 
   maxi = 0;
}
else{
    maxi = end - start + 1;
}
maxAns = max(maxAns, maxi);
end++;
}

cout << n - maxAns << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}