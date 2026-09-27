#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        int st = 0;
        for (int j = 1; j <= i; j++){
            cout << char('A' + (st)) << " ";
            st++;
        }
        cout << endl;
    }
}