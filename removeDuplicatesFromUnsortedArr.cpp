#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int>arr = {-1, 2, -1, 3, 2, -4};

vector<int>ans;
unordered_set<int>s;
for (int i = 0; i < arr.size(); i++){
    if(s.find(arr[i]) == s.end()){
        s.insert(arr[i]);
        ans.emplace_back(arr[i]);
    }
}

for (auto it : ans){
    cout << it << " ";
}
return 0;
}