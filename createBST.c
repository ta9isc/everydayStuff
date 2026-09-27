#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node{
    int data;
   struct  Node* left;
    struct Node* right;
}Node;

void createBST(Node** root, int key){
    if(key == -1) return;
    if(*root == NULL){
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = key;
        newNode -> left = NULL;
        newNode -> right = NULL;

        *root = newNode;
    }
    else{
        if((*root) -> data > key){
            createBST(&((*root) -> left), key);
        }
        else{
            createBST(&((*root)-> right), key);
        }
    }
}

void inorder(Node* root){
    if(!root) return;
    inorder(root -> left);
    printf(" %d", root -> data);
    inorder(root -> right);
}

int main(){
    Node* root = NULL;
    int arr[7] = {10, 30, 35, 40, 45, 50, 70};
    for (int i = 0; i < 7 ; i++){
        createBST(&root, arr[i]);
    }

    inorder(root);
}