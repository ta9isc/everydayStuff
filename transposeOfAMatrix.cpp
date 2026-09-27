#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>>matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = matrix.size();
    int col = matrix[0].size();
    
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
     for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    // vector<vector<int>>matT(matrix[0].size(), vector<int>(matrix.size()));
    // for (int i = 0; i < matrix.size(); i++){
    //     for (int j = 0; j < matrix[0].size(); j++){
    //         matT[i][j] = matrix[j][i];
    //     }
    // }
   
    // for (auto vec : matT){
    //     for (auto el : vec){
    //         cout << el  << " ";
    //     }
    //     cout << endl;
    // }
}