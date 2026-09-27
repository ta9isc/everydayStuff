#include <bits/stdc++.h>
using namespace std;

int ans(int n){
    int cnt = 0;
    while(n > 0){
       n /= 10;
       cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    cout << ans(n) << endl;
    return 0;
}