#include <bits/stdc++.h>
using namespace std;

int main(){

    

    vector<vector<int>>matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (auto vec : matrix){
        for (auto el : vec){
            cout << el << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++){
        cout << matrix[i][i] << " ";
    }
    int m = 0;
    for (int n = 2; n >= 0; n--){
      cout << matrix[n][m++] << " ";
    }
    return 0;
}