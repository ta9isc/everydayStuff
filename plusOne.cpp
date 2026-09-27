#include <bits/stdc++.h>
using namespace std;

vector<int>solve(vector<int>&arr){
    int carry = 1;
    int i = arr.size() - 1;
    while(i >= 0){
        int sum = arr[i] + carry;
        arr[i] = sum % 10;
        carry = sum / 10;
        if(i == 0) break;
        i--;
    }
    if(carry > 0){
        vector<int>newArr(arr.size() + 1);
        newArr[0] = carry;
        for (int i = 0; i < arr.size(); i++){
            newArr[i + 1] = arr[i];
        }
        return newArr;
    }
    return arr;
}
int main(){
vector<int>arr = {1, 2, 3};
vector<int>ans = solve(arr);
for (auto el : ans){
    cout << el << " ";
}

return 0;
}