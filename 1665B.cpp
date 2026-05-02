#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxFreq(vector<int>& a, int n){
sort(a.begin(), a.end());

long long most_frequent = a[0];
int max_freq = 0;
int current_freq = 0;

for (int i = 0; i < n; i++) {
    current_freq++;
    if (i == n - 1 || a[i] != a[i + 1]) {
        if (current_freq > max_freq) {
            max_freq = current_freq;
            most_frequent = a[i];
        }
        current_freq = 0;
    }
}
return max_freq;
}

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    for(auto &ele : vec){
        cin >> ele;
    }

    int b = maxFreq(vec, n);
    int cloned = b;
    int operations = 0;
    int elements = b;

    while(cloned < n){
        if((n-cloned) < b){
            operations++;
            operations+= (n-cloned);
            break;
        }

        operations += b;
        cloned += b;
        operations++;
        b = b*2;

    }

    cout << operations << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}