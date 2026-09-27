#include <bits/stdc++.h>
using namespace std;

bool isPal(int n){
    int rev = 0, org = n;

    while(org > 0){
        int d = n%10;
        rev = rev*10 + d;
        org/=10;
    }
    cout << "n " << n << " " << "rev " << rev << endl;
    return n == rev;
}

int revv(int n){
    int rev = 0, org = n;
    while(org > 0){
        int d = org%10;
        cout << "d " << d << endl;
        rev = rev*10 + d;
        cout << "rev " << rev << endl;
        org /= 10;
    }
    return rev;
}

int main(){
    int n;
    cin >> n;
    // cout<<( isPal(n)? "Yes" : "NO");
    cout << revv(n);
}