#include <iostream>
#include<vector>
using namespace std;

void solve() {
    int a,b;
    cin >> a >> b;
    int n; cin >> n;

    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }
    sort(vec.begin(), vec.end());

    int timer = 0;
    int curr = b ;
    int i = 0;

    while(i < n-1){
        if(curr == 1){
            timer += min(curr + vec[i] -1 , a);
            curr = min(curr + vec[i] , a);
            i++;
        }
       else if(curr + vec[i] >= a){
         timer += (curr -1);
       }
       else{
        curr = curr + vec[i];
        timer ++;
        i++;
       }
       curr--;
    }
        timer += curr - 1;
        timer += min(vec[n-1] + 1, a);

    cout << timer << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}