#include <bits/stdc++.h>
using namespace std;


bool pairSum(vector<int>& arr, int target){
    unordered_map<int, int>m;
    for (int i = 0; i < arr.size(); i++){
        int diff = target - arr[i];
        if(m.count(diff)){
            cout << "found" << endl;
            return true;
        }
        else{
            m[arr[i]] = i;
        }

    }
    return false;
}

vector<int>pairSumTwoPtr(vector<int>& a, int target){
    int i = 0,j = a.size() - 1;
    while (i < j){
        int sum = a[i] + a[j];
        if(sum == target) return {i, j};
        else if (sum > target){
            j--;
        }
        else{
            i++;
        }
    }
    return {-1, -1};
}
int main(){
vector<int>arr = {2, 7, 11, 15};
int target = 9;

// cout << pairSum(arr, target);
vector<int>ans = pairSumTwoPtr(arr, target);
for (auto it : ans){
    cout << it << " ";
}
}