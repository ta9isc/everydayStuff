#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence) {
       
    set<char>s;
    vector<char>v;
    for (int i = 0; i < sentence.size(); i++){
        if(!s.count(sentence[i])){
            s.insert(sentence[i]);
            v.emplace_back(sentence[i]);
        }
    }

    for (auto it : s){
        cout << it << " ";
    }
    cout << endl;
   for (auto it : v){
    cout << it << " ";
   }
   cout << endl;
   cout << v.size() << endl;
    return v.size() == 26;
    }
    
int main(){
string sentence = "thequickbrownfoxjumpsoverthelazydog";
cout << checkIfPangram(sentence);
}