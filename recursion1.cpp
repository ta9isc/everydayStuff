#include <iostream>
using namespace std;
void f(int i, int n){
    if(i <= n){
        printf("%d", ++i);
        f(i, n);
    }
}

void fn(int i, int n){
    if(i <= n){
        fn(++i, n);
        printf("%d", i);
    }
}

void func(int i, int n){
    if(i > n) return;
    printf("%d", i);
    func(++i, n);
}
void funcc(int i, int n){
    if(i > n) return;
    funcc(i+1, n);
    printf("%d", i);
}

int sum(int i, int n, int s){
    if(i > n) return s;
    s = s + i;
    return sum(i + 1, n, s);
}

int summ(int n, int s){
    if (n <= 0) return s;
    s += n;
    return summ(n - 1, s);
}

int poww(int a, int n){
    if(n == 1) return a;
    return a * poww(a, n - 1);
}

int countDig(int n, int cnt){
    if (n < 0) return cnt;
    cnt += 1;
    return countDig(n/ 10, cnt);
}
int main(){
  //printf("%d", summ(5, 0));
 // printf("%d", poww(7, 3));
  cout << countDig(1567, 0);
}