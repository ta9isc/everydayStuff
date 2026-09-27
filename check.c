#include <stdio.h>
int* modify(int **value){
    int v = 20;
    return *value = &v;
}

int main(){
    int value = 10;
    int *pValue = &value;
    
    printf(" %d", *modify(&pValue));
}
