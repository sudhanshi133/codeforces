#include <iostream>
using namespace std;

void solve() {
    string str1, str2;
    cin >> str1 >> str2;

    if(str2.length() > str1.length()){
        cout << "NO" << endl;
    }

    vector<int> vec(26);
    for(int i = 0 ; i < str1.length(); i++){
        int k = str1[i]-'a';
         vec[k] = i;
    }

    bool flag = true;
    int a = -1;

   for(int i = 0 ; i <str2.length() ; i++){
       int m = str2[i]-'a';
       if(a > vec [m] ){
         flag = false;
         break;
       }
       else if(vec[m] == -1){
        flag = false;
        break;
   }
       a = vec[m];
    }
    flag ? cout << "YES" << endl : cout << "NO" << endl; 
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}