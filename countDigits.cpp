#include <iostream>
using namespace std;

int countDig(int n, int cnt){
    if (n == 0) return cnt;
    cnt += 1;
    return countDig(n/10, cnt);
}

int prodOfDig(int n, int prod){
    if(n == 0) return prod;
    prod *= n % 10;
    return prodOfDig(n/10, prod);
}

int prodd(int n, int prod = 1){
    if(n == 0) return prod;
    return prodd(n/10, prod*(n % 10));
}

// reverse a string

string rev(string s){
    static int i = 0, j = s.length() - 1;
    if(i > j) return s;
    swap(s[i], s[j]);
    i++; j--;
    return rev(s);
}
int main(){

    // //int n = countDig(1567, 0);
    // int n = prodd(11235, 1);
    // cout << n;

    cout << rev("ulpztspw");
}