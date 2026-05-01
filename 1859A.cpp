#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void func(vector<int>& vec){
    sort(vec.begin(), vec.end());
    int n = vec.size();
    if(vec[n-1] == vec[0]){
        cout << -1 << endl;
        return; 
    }

    int k = 1;
    for(int i=n-2; i>=0; i--){
        if(vec[i] == vec[n-1]) k++;
        else break;
    }
    cout << n-k << " " << k << endl;

    for(int i=0; i<n; i++){
        cout << vec[i] << " ";
        if(i==n-k-1) cout << endl;
    }
    cout << endl;
}

void solve() {
int n; cin >> n;
int odds=0, evens=0;
vector<int> vec(n);

for(auto &ele : vec){
    cin >> ele;
    if(ele%2!=0) odds++;
    else evens++;
}

if(odds==0 || evens==0){
    func(vec);
}
else{
    cout << odds << " " << evens << endl;
    for(int i=0; i<n; i++){
        if(vec[i]%2!=0) cout << vec[i] << " ";
    }
    cout << endl;

    for(int i=0; i<n; i++){
        if(vec[i]%2==0) cout << vec[i] << " ";
    }
    cout << endl;
}
return;
}

int main() {
int t; cin >> t;
while (t--) solve();
}