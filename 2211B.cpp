#include <iostream>
using namespace std;


long long countFactors(long long n) {
    if (n == 0) return 0; 
    if (n < 0) n = -n;  
     long long count = 1;
    long long temp = n;
    for (long long i = 2; i * i <= temp; ++i) {
        if (temp % i == 0) {
            int exponent = 0;
            while (temp % i == 0) {
                exponent++;
                temp /= i;
            }
            count *= (exponent + 1);
        }
    }
    if (temp > 1) {
        count *= (1 + 1);
    }
 return count;
}
void solve() {
    long long x, y;
    cin >> x >> y;

    // RULE 1: If both types of numbers exist (x > 0 and y > 0), 
    // we can always arrange them to make f(a) = 1.
    if (x > 0 && y > 0) {
        cout << 1 << endl;
    } 
    // RULE 2: If only one type of number exists, f(a) is the 
    // count of divisors of the total sum.
    else {
        cout << countFactors(x + y) << endl;
    }

    // THE CONSTRUCTION: Print all x ones, then all y negative ones.
    // This 'mountain' shape of prefix sums prevents equal-sum partitions.
    for (int i = 0; i < x; i++) {
        cout << 1 << (i == x + y - 1 ? "" : " ");
    }
    for (int i = 0; i < y; i++) {
        cout << -1 << (i == x + y - 1 ? "" : " ");
    }
    cout << endl;
}

// void solve() {
//     long long x,y;
//     cin >> x >> y;
    
//     if(x == y){

//         if(x % 2 != 0){
//         cout << 1 << endl ;
//         for(long long i = 0; i < x; i++){
//             cout << -1 << " ";
//         }
//          for(long long i = 0; i < y - 1; i++){
//             cout << 1 << " ";
//         }
//         cout << 1 << endl;
//     }
//     else{
//         cout << countFactors(x) << endl;
//         for(long long i = 0 ; i < x -1 ; i++){
//             cout << -1 << " " << 1 << " ";
//         }
//       cout << -1 << " " << 1 << endl; 
//     }

// }
// else if (x == 0 || y == 0){
//     if(x==0){
//         if(y % 2 != 0) {
//          cout << 1 << endl;
//         }
//         else{
//           cout << countFactors(y) << endl;
//         }
//         for(long long i = 0 ; i < y - 1 ; i++){
//             cout << -1 << " ";
//         }
//         cout << -1 << endl;
//     }
//     else{
//         if(x % 2 != 0){
//             cout << 1 << endl;
//       }
//         else{
//         cout << countFactors(x)  << endl;
//        }
//       for(long long i = 0 ; i < x - 1 ; i++){
//         cout << 1 << " ";
//     }
//     cout << 1 << endl;
//     }
// }
// else{
//     if(abs(x-y) < 2){
//         cout << 1 << endl;
//         for(long long i = 0 ; i < x ; i++){
//             cout << 1 << " ";
//         }
//         for(long long i = 0 ; i < y - 1 ; i++){
//             cout << -1 << " ";
//         }
//         cout << -1 << endl;
//     }
//     else{
//        if(y % 2 !=0 && y/2 == x){
//            cout << 2 << endl;

//            cout << -1 << " ";


//            for(int i = 0 ; i < x - 1 ; i ++){
//              cout << -1 << " " << -1 <<" " << 1 << " "; 
//            }
//                         cout << -1 << " " << -1 <<" " << 1 <<  endl;

//        }
//        else{
//                 cout << 1 << endl;
//         for(long long i = 0 ; i < x ; i++){
//             cout << 1 << " ";
//         }
//         for(long long i = 0 ; i < y - 1 ; i++){
//             cout << -1 << " ";
//         }
//         cout << -1 << endl;

//     }
//     }
// }
// }

int main() {
    int t; cin >> t;
    while (t--) solve();
}