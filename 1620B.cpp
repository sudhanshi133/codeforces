#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int w, h; cin >> w >> h;

    int a; cin >> a;
    vector<int> vec1(a);

    for(auto &ele : vec1){
       cin >> ele;
    }

    int diff = (vec1[a-1] - vec1[0]) * w;


    int b; cin >> b;
    vector<int> vec2(b);
    
    for(auto &ele : vec2){
       cin >> ele;
    }

    int j = (vec2[b-1] - vec2[0]) * w;
    diff = max(diff, j);

    int c; cin >> c;
    vector<int> vec3(c);
    
    for(auto &ele : vec3){
       cin >> ele;
    }

   diff = max(diff, (vec3[c-1] - vec3[0]) * h);

    int d; cin >> d;
    vector<int> vec4(d);
    
    for(auto &ele : vec4){
       cin >> ele;
    }

   diff = max(diff, (vec4[d-1] - vec4[0]) * h);

    cout << diff ;
    cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}