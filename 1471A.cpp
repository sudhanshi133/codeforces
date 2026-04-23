#include <iostream>
#include<vector>
using namespace std;

void solve() {
    long long n; cin >> n;
    long long x; cin >> x;
    vector<long long> vec(n);

    for(long long i=0; i<n; i++){
        cin >> vec[i];
    }

    long long mini = 0;
    long long maxi = 0;
    long long sum=0;

    for(long long i=0; i<n; i++){
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