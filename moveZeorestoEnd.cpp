#include <bits/stdc++.h>
using namespace std;


vector<int>moveZeroes(vector<int>& a){
    int i = 0, j = 1;
    while (j < a.size()){
        if(a[i] == 0 && a[j] == 0) j++;
        else if (a[i] == 0){
            swap(a[i], a[j]);
        }
        else{
            i++; j++;
        }
    }

    for (auto it : a){
        cout << it << " ";
    }

}

int main(){
    vector<int>a = {0, 1};
    moveZeroes(a);
}