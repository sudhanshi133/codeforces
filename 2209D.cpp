#include <iostream>
using namespace std;

void solve() {

    int r,g,b;
    cin >> r >> g >> b;

    if(r==0 && g==0 && b==0){
        cout << endl;
        return;
    }

    if(r==0 || g==0 || b==0 ){
        if(r==g && r==0){
           cout <<"B" << endl;
        }
        else if(r==b && b==0){
           cout << "G" << endl;
        }
        else if(b==g && g==0){
            cout << "R" << endl;
}
        return;
    }

    if(r == g && g == b){
        char first = 'G';
        string s;

        while(r > 0){
            s+= first;
            if(first == 'G'){
                first = 'B';
                s+= "BR";
            }
            else if(first == 'B'){
                first = 'R';
                s+= "RG";
            }
            else{
                first = 'G';
                s+= "GB";
            }
            r--;
        }
      cout << s << endl;
      return;
    }
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}