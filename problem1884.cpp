#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int maxFreq = 0;

    vector<vector<int>>log  = {{1993, 1999}, {2000, 2010}};
    vector<int>freq(101, 0);
    for (int i = 0; i < log.size(); i++){
        for (int j = log[i][0]; j < log[i][1]; j++){
            freq[j - 1950]++;
            if(freq[j - 1950] > maxFreq) maxFreq = freq[j - 1950];
        }
    }

for (int i = 0; i < freq.size(); i++){
    if (freq[i] == maxFreq){
        cout << i + 1950;
        break;
    }
}

    
}