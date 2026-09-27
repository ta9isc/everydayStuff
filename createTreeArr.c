#include <stdio.h>
#include <stdbool.h>

void create(int arr[], int i, int root){
    int lvalue, rvlaue;
   printf("Enter the left value of  %d: ", root);
    scanf("%d", &lvalue);
    printf("Enter the right child of  %d: ", root);
    scanf("%d", &rvlaue);
    // if(lvalue == -1 && rvlaue == -1) return;
   
        arr[2*i] = lvalue;
        
        arr[2*i + 1] = rvlaue;
        if(lvalue != -1){
         create(arr, 2*i, lvalue);
        }
        if(rvlaue != -1){
        create(arr, 2*i + 1, rvlaue);
        }
}
int main(){
    int arr[100];
    for (int i = 0; i < 100; i++){
        arr[i] = -1111;
    }
    printf("Enter the root ");
    int root;
    scanf("%d", &root);
    arr[1] = root;
create(arr, 1, root);


int j = 1;

while(arr[j] != -1111){
    if(arr[j] == -1){
        j++;
        continue;
    }

    printf("%d ", arr[j]);
    j++;
}
}
    
