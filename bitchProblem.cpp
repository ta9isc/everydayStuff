#include <bits/stdc++.h>
using namespace std;

vector<int>fillTargetArr(vector<int>&index, vector<int>&nums){
    vector<int>target(nums.size(), -1);
    for (int i = 0; i< nums.size(); i++){
        if(target[index[i]] == -1){
            target[index[i]] = nums[i];
        }
        else{
            for (int j = nums.size() -1; j > index[i]; j--){
              target[j] = target[j- 1];
            }
            target[index[i]] = nums[i];
        }
    }
return target;
}
int main(){
vector<int>nums = {0, 1, 2, 3, 4};
vector<int>index = {0, 1, 2, 2, 1};
vector<int>ans = fillTargetArr(index, nums);
for (auto it : ans){
    cout << it<< " ";
}

    return 0;
}