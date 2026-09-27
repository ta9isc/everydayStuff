#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 0, 0};
    int k = 34;
    int dup = k;
    vector<int>kk((int)(log10(k) + 1));
   for (int i = kk.size() - 1; i >= 0; i--){
    kk[i] = dup % 10;
    dup /= 10;
   }

   for (auto it : kk){
    cout << it << " ";
   }

}