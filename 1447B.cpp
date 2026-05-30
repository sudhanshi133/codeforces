#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int n, m; 
    cin >> n >> m; 
    
    int arr[10][10];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    int negCount = 0;   
    int minAbs = INT_MAX; 
    long long sum = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] < 0) negCount++;
            minAbs = min(minAbs, abs(arr[i][j]));
            sum += abs(arr[i][j]);
        }
    }
    if(negCount % 2 != 0)
        sum -= 2 * minAbs;

    cout << sum << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}
