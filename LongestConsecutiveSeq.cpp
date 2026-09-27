#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int>a = {15, 13, 12, 14, 11, 10, 9};

    map<int, int> m;
    for (int i = 0; i < a.size(); i++){
        m[a[i]] = i;
    }
    vector<int>cont;
    for (auto it : m){
        cont.emplace_back(it.first);
    }
    int i = 1, mx = 1;
    int cnt = 1;
    while(i < cont.size()){
      if(cont[i] - cont[i - 1] == 1){
        cnt++;
        mx = max(cnt, mx);
      }
      else{
        cnt = 1;
      }
      i++;
    }
    cout << mx;
}