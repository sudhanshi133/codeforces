#include <iostream>
#include<vector>
using namespace std;

void solve() {
int n; cin >> n;

//input
vector<char> vec(n);
for(auto &ele : vec){
cin >> ele;
}
int count = 0 ;
int c = 0 ;
int maxCount = 0 ;

for(int i = 0 ; i < n ; i++){
if(vec[i] == '.'){
count ++;
c++;
maxCount = max(count, maxCount);
}else{
count = 0;
}
}

if(maxCount >= 3){
cout << 2 << endl;
}
else{
cout << c << endl;
}
}

int main() {
int t; cin >> t;
while (t--) solve();
}