#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrix = {{1, 2}, {3, 4}};
    vector<int>arr;

    int row = 1, col = 4;
    vector<vector<int>>reshapedMatrix(row, vector<int>(col));
    for (int i = 0; i < matrix.size(); i++){
        for (int j = 0; j < matrix[0].size(); j++){
           arr.push_back(matrix[i][j]);
        }
        cout << endl;
    }
    int k = 0;
    if(row*col == matrix.size()*matrix[0].size()){
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                reshapedMatrix[i][j] = arr[k];
                k++;
            }
        }
    }

    for (auto vec : reshapedMatrix){
        for (auto el : vec){
            cout << el << " ";
        }
        cout << endl;
    }
    return 0;
}