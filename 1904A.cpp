#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
typedef pair<int, int> pii;
typedef vector<pii> vii;

void solve() {
  int a, b, ka, kb, qa, qb;
  cin >> a >> b >> ka >> kb >> qa >> qb;

  vii directions = {{a,b}, {-a, -b}, {-a,b}, {a, -b},
{b,a},  {-b, -a}, {-b, a}, {b, -a}};

  set<pii> st1, st2;
  
  for(auto d : directions){
    st1.insert(make_pair(ka + d.first, kb + d.second));
    st2.insert(make_pair(qa + d.first, qb + d.second));
  }

  int ans = 0;
  for(auto pos : st1){
    if(st2.find(pos)  != st2.end())
    ans++;
  }

  cout << ans << endl;

    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}
// in this, firstly we find all the positions where king and queen 
// are attacked 
// then we check if there is any common position where they are attacked
//  their sum is the answer