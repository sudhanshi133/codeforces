#include <iostream>
using namespace std;

void solve() {
int n; cin >> n;
vector<int> vec(n);

for(auto &ele : vec){
cin >> ele;
}

int len = 0;
int maxlen = 0;
int start = 0;
int end = 0;

while(end < n && start <= end){
    if(vec[end] == 1){
        len = 0;
        start = end + 1;
    }
    else{
        len++;
        maxlen = max(len, maxlen);
    }
    end++;
}

cout << maxlen << endl;
}

int main() {
int t; cin >> t;
while (t--) solve();
}