#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n);
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }

        vector<int> arr2(n);
        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
        }
     
        vector<pair<int,int>> v;

for(int i = 0; i < n; i++){
    v.push_back({arr1[i], arr2[i]});
}

sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b){
    if(a.second == b.second){
        return a.first > b.first;   // larger arr1 first
    }
    return a.second < b.second;     // smaller arr2 first
});

for(int i = 0; i < n; i++){
    arr1[i] = v[i].first;
    arr2[i] = v[i].second;
}

for(int i = 0; i < n; i++){
    cout << v[i].first << " " << v[i].second << endl;
}

// int sum = 0;
// int p = 0 ;
// int start = 0 ;
// int end = n-1;

// while(start<=end){
// sum+=m;

// int people_left = n - p;
// if(people_left <= 0){
//     break;
// }

// if(people_left <= v[start].first){
// sum+=v[start].second * v[start].first;
// }else{
// sum+=v[start].second * people_left;
// }

// p+= v[start].first;
// end = end - v[start].first;
// start++;
// }

// cout<<sum<<endl;
    }
    return 0;
}