#include <iostream>
using namespace std;

void solve() {
int n; cin >> n;
vector<int> vec(n);

for(auto &ele : vec){
    cin >> ele;
}

int neg = 0 ;
int pos = 0 ;
int ans = 0 ;

for(int i = 0 ; i < n ; i++){
    if(vec[i] == 1){
        pos++;
    }
    else{
        neg++;
    }
}
if(neg%2==0 && pos>=neg){
    cout << 0 << endl;
}
else if(neg%2==0 && neg>pos){
    int k = neg-pos;
    if(k%2==0){
        cout << k << endl;
    }
    else{
        cout << k+1 << endl;
    }
}
else{
    if(pos >= neg){
    cout<< 1 << endl;
}
else{
   // cout<<"M"<<endl;
    int k = neg - pos;
            if(k%2==0){
        cout << k+1 << endl;
    }
    else{
        cout << k << endl;
    }

}
}
}

int main() {
int t; cin >> t;
while (t--) solve();
}