#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        int st = 0;
        for (int j = 1; j <= 2*n; j++){
            if(j <= i){
                cout << (++st) ;
            }
            else if (j > 2*n - i){
                cout << st ;
                st--;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}