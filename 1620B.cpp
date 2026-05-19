#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    long long w, h; cin >> w >> h;  // read as long long

    int a; cin >> a;
    vector<long long> vec1(a);
    for(auto &ele : vec1) cin >> ele;

    long long diff = (vec1[a-1] - vec1[0]) * h;  // bottom side, height = h

    int b; cin >> b;
    vector<long long> vec2(b);
    for(auto &ele : vec2) cin >> ele;
    diff = max(diff, (vec2[b-1] - vec2[0]) * h);  // top side, height = h

    int c; cin >> c;
    vector<long long> vec3(c);
    for(auto &ele : vec3) cin >> ele;
    diff = max(diff, (vec3[c-1] - vec3[0]) * w);  // left side, height = w

    int d; cin >> d;
    vector<long long> vec4(d);
    for(auto &ele : vec4) cin >> ele;
    diff = max(diff, (vec4[d-1] - vec4[0]) * w);  // right side, height = w

    cout << diff << "\n";
}


int main() {
    int t; cin >> t;
    while (t--) solve();
}