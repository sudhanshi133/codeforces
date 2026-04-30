#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long func(long long a, long long  b, vector<long>& vec){
long long sum = 0;
if(a-1 >=0) return vec[b] - vec[a-1];
return vec[b];
}

void solve() {
  long long n, q;
  cin >> n >> q;

vector<long long> vec(n);
vector<long> prefix(n);
long long sum =0;
long long arr[q][3];

for(int i=0; i<n; i++){
cin >> vec[i];
sum+= vec[i];
prefix[i] = sum;
}

for(long long i=0; i<q; i++){
for(long long j=0; j<3; j++){
    cin >> arr[i][j];
}
}

for(long long i=0; i<q; i++){
long long a = sum - func(arr[i][0] - 1 , arr[i][1] - 1, prefix);

if(a%2!=0){
    if(arr[i][2]%2==0) cout << "YES";
    else if((arr[i][1] - arr[i][0] + 1)%2!=0) cout << "NO";
    else cout << "YES";
}
else{
    if(arr[i][2]%2==0) cout << "NO";
    else if((arr[i][1] - arr[i][0] + 1)%2!=0) cout << "YES";
    else cout << "NO"; 
}
cout << endl;
}

return;
}

int main() {
int t; cin >> t;
while (t--) solve();
}