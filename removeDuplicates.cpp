#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {-3,-3,-2,-2,-1,0,0};
    vector<int>ans;
    for (int i = 0; i < arr.size(); i++){
        if(i + 1 < arr.size()){
            if(arr[i] == arr[i + 1])continue;
        }
        ans.emplace_back(arr[i]);
    }

    for (auto it : ans){
        cout << it << " ";
    }
    return 0;
}