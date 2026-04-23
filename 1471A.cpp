#include <iostream>
#include<vector>
using namespace std;

void solve() {
    int n; cin >> n;
    int x; cin >> x;
    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    int mini = 0;
    int maxi = 0;
    int sum=0;

    for(int i=0; i<n; i++){
        maxi+=(vec[i]/x);
        if(vec[i]%x!=0) maxi++;
        if(vec[i]%x==0) mini+=(vec[i]/x);
        else sum+=vec[i];

        if(sum%x==0 && sum!=0){
            mini+=(sum/x);
            sum = 0;
        }
    }

    if(sum!=0){
        if(sum%x==0) mini+=(sum/x);
        else mini += (sum/x)+1;
    }

    cout << mini << " " << maxi << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}