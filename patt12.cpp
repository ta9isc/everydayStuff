#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int st = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << ++st << " ";
        }
        cout << endl;
    }
    return 0;
}