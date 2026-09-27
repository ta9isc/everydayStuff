#include <bits/stdc++.h>
using namespace std;

int main(){
    int row = 2, col = 3;
   vector<vector<int>>matrix(row, vector<int>(col, 0));
   for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
        cout << matrix[i][j] << " ";
    }
    cout << endl;
   }

   vector<vector<int>>indices = {{0,1}, {1,1}};
for (int id = 0; id < indices.size(); id++){                            
   for(int i = 0; i < col; i++){
    matrix[indices[id][0]][i] =  matrix[indices[id][0]][i] + 1;
   }
   for (int i = 0; i < row; i++){
    matrix[i][indices[id][1]] = matrix[i][indices[id][1]]  + 1;
   }

}
   cout << endl;
   for (auto vec: matrix){
    for(auto el : vec){
        cout << el << " ";
    }
    cout << endl;
   }
}