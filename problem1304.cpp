#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
     vector<int>ans;
        for (int i = -n/2; i <= n/2; i++){
           if(i == 0){
            if(n % 2 == 0)continue;
           
           else{
            ans.push_back(i);
           }
        }
           else{
            ans.push_back(i);
           }
         }
    

    for (auto el : ans){
        cout << el <<  " ";
    }
    return 0;
}