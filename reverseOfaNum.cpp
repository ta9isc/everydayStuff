#include <bits/stdc++.h>
using namespace std;

// int ans(int n){
//     int p = (int)(log10(n) + 1);
//     int nd = 0;
//     cout << "p " << p << endl;

//     while(n > 0 && p> 0){
//         int lg = n % 10;
//        // cout << "lg " << lg << endl;
//          nd = nd + lg*pow(10, p);
//        cout << "nd " << nd << endl;
//         p -= 1, n /= 10;
//         //cout << "p " << p << endl;
//         //cout << n << endl;
//     }
//     return nd;
// }

int ans(int n){
    int nd = 0, p = (int)(log10(n) + 1);
    while(n > 0 && p > 0){
        int lg = n % 10;
        nd = nd + lg*pow(10, p);
        p -= 1, n /= 10;
    }
    return nd;
}
int main(){
    int n;
    cin >> n;
    cout << ans(n)/10 << endl;
  //cout << 4*pow(10, 3);
}