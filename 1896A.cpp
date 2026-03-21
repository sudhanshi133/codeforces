#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;
vector<int> vec(n);

for(auto &ele : vec){
cin>>ele;
}

bool flag = true;
int a = vec[0];

for(int i = 1 ; i < n-1 ; i +=2){
    int b = vec[i];
    int c = vec[i+1];
 if(b > a && c > b){
    a = vec[i];
    continue;
 }
else if (b > a && b > c){
    if(c > a){
        a = vec[i];
    }
    else{
        flag = !flag;
        break;
    }
}
else{
    flag = !flag;
    break;
}
}

if(flag){
cout << "YES"<< endl;
}
else{
cout << "NO" << endl;
}
}

int main() {
int t; cin >> t;
while (t--) solve();
}