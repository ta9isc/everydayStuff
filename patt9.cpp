#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int st = 1;

    for (int i = 1; i <= 2*n - 1; i++){
     if(i <= n){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout <<endl;
     }
     else{
        for (int j = 1; j < i - st; j++){
            cout << "*";
        }
        st += 2;
        cout << endl;
     }

    }
    return 0;
}