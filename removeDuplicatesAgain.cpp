#include <bits/stdc++.h>
using namespace std;


vector<int>removeDup(vector<int>& arr){
    int i = 0, j = 1;
    int cnt = 0;
    while (j < arr.size()){
        if(arr[i] == arr[j]) j++;
        else if (arr[i] != arr[j]){
            arr[i + 1] = arr[j]; i++; j++;cnt++;
        } 
    }
    cout << cnt << endl;

    return arr;

}
int main(){
vector<int>arr = { 0,0,1,1,1,2,2,3,3,4};
                //   i  j   if(i == j) j++
                //   0,0,1,1,1,2,2,3,3,4
                //   i   j   if(i != j) (i+1 = j) j++
                //   0,1,1,1,1,2,2,3,3,4
                //     i   j j++
                //   0,1,1,1,1,2,2,3,3,4
                //     i       j   (i != j) (i + 1 = j) j++
                //   0,1,2,1,1,2,2,3,3,4
                //       i         j  (i != j) => i + 1 = j j++
                //   0,1,2,3,1,2,2,3,3,4
                //         i           j

        vector<int>ans = removeDup(arr);
        for (auto el : ans){
            cout << el << " ";
        }
}