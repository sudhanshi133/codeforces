#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;
vector<int> vec(n-1);

int sum = 0 ;

for(auto &ele : vec){
    cin >> ele ;
    sum += ele;
}

cout << sum*-1 << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}