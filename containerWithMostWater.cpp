#include <bits/stdc++.h>
using namespace std;


int solve(vector<int>& a){
int mx = 0;
int i = 0, j = a.size() - 1;
while(i < j){
    int area = min(a[i], a[j])*(j - i);
   
         mx = max(area, mx);
    // if(j - i > 1){
    //     if(min(a[i], a[j - 1]) > min(a[i + 1], a[j])){
    //         j--;
    //     }
    //     else{
    //         i++;
    //     }
    // }

    //  else{
    //     break;
    //  }
    if (a[i] < a[j]){
        i++;
    }
    else{
        j--;
    }
}
return mx;
}
int main(){
vector<int>a = {2, 1, 8, 6, 4, 6, 5, 5};
cout << solve(a);
}