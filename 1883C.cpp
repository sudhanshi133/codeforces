#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    int k; cin >> k;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    } 
    
    int least = 5;
    int b = 0;

    for(int i=0; i<n; i++){

        if(vec[i]%2==0) b++;

        if(vec[i] % k == 0){
            cout << 0 << endl;
            return;
        }
        
        if(k == 2){
            least = 1;           
        }
        else if(k == 5){
            least = min(least, 5 - (vec[i] % 5));
        }
        else if(k == 3){
            least = min(least, 3 - (vec[i] % 3));
        }
        else{
           if(b>1) {
            cout << 0 << endl;
            return;
           }
           else if(b==1) {
            least = 1;
           }
           else {
            // i got here
            least = min(least, min(4 - (vec[i]%4), 2));
           }
        }
    } 

    cout << least;
    cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}