#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;
vector<int> vec(n);

for(auto &ele : vec){
    cin >> ele;
}

if(n<3){
    cout << "Yes" << endl;
    return;
}
int a1 = vec[0];
int c1 = 0;
int a2;
int c2 = 0;
bool flag = true;
bool b1 = true;

for(int i = 0 ; i < n ; i++){
if(vec[i] == a1){
    c1 ++;
}
else if(vec[i] != a1 && flag){
    flag = false;
    a2 = vec[i];
    c2++;
}
else if(vec[i] == a2){
    c2++;
}
else{
    b1 = false;
}
}
if(b1 == false){
    cout << "No" << endl;
}
else if(c1 == n){
    cout << "Yes" << endl;
}
else if (n % 2 ==0 && c1 == c2){
    cout << "Yes" << endl;
}
else if(n%2 == 1 && (c1+1 == c2 || c2+1 == c1)){
        cout<<"Yes" << endl;
}
else{
    cout <<"No" << endl;
}
}

int main() {
int t; cin >> t;
while (t--) solve();
}