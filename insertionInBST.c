#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* left;
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
        if(((*root) -> data)> key){
            createBST(&((*root) -> left), key);
        }
        else{
            createBST(&((*root) -> right), key);
        }
    }
}

void inorder(Node* root){
    if(!root) return;
    inorder(root -> left);
    printf(" %d", root -> data);
    inorder(root -> right);
}


void levelOrderTraversal(Node* root){
    Node* q[1000];
    int front = 0;
    int rear = 0;
    q[rear++] = root;
    while(front < rear){
        int levelsize = rear - front;
        for (int i = 0; i < levelsize; i++){
        Node* curr = q[front++];
        printf(" %d", curr -> data);
        if(curr -> left){
            q[rear++] = curr -> left;
        }
        if(curr -> right){
            q[rear++] = curr -> right;
        }
    }
    printf("\n");
        
    }
}


void insertInBST(Node** root, int key){
    if(*root == NULL){
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = key;
        newNode -> left = NULL;
        newNode -> right = NULL;
       *root = newNode;
        return;
    }
    else{
        if(((*root) -> data) > key){
            insertInBST(&(*root) -> left, key);
        }
        else{
            insertInBST(&(*root) -> right, key);
        }
    }
}
int main(){
    Node* root  = NULL;
    int arr[7] = {15, 5, 20, 17, 25, 10, 28};
    for (int i = 0; i < 7; i++){
        createBST(&root, arr[i]);
    }
    inorder(root);
    insertInBST(&root, 27);
    printf("\n");
    inorder(root);
    printf("\n");
    levelOrderTraversal(root);
}