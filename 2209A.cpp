#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
int n; cin >> n;
long long c; cin >> c;
long long k; cin >> k;

vector<int> vec(n);

for(auto &ele : vec){
    cin >> ele;
}

sort(vec.begin(), vec.end());

long long ans = c;

for(int i = 0; i < n; i++){
    if(vec[i] > c){
        break;
    }
    long long d = c - vec[i];

        if(k >= d){
            k = k - d;
            c+= d;
        }
        else if (k!=0){
            c+= k;
             k = 0;
        }

        c+= vec[i];
    }

cout << c << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}