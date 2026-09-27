#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
    struct Node* left;
    int data;
    struct Node* right;
}Node;

void buildBST(Node** root, int key){
    if(*root == NULL){
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = key;
        newNode -> left = NULL;
        newNode -> right = NULL;
        *root = newNode;
        return;
    }
    else{
        if(((*root)-> data) > key){
            buildBST(&((*root) -> left), key);
        }
        else{
            buildBST(&((*root) -> right), key);
        }
    }
}

void inorder(Node* root){
    if(!root) return;
    inorder(root -> left);
    printf(" %d", root -> data);
    inorder(root -> right);
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
        if(((*root)-> data) > key){
            buildBST(&((*root) -> left), key);
        }
        else{
            buildBST(&((*root) -> right), key);
        }
    }
}

void levelOrder(Node* root){
    if(!root) return;
    Node* q[1000];
    int front = 0;
    int rear = 0;
    q[rear++] = root;
    while(front < rear){
        int levelSize = rear - front;
        for (int i = 0; i < levelSize; i++){
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

void searchOrInsert(Node** root, int key){
    if(*root == NULL){
        //insert
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = key;
        newNode -> left = NULL;
        newNode -> right = NULL;
        *root = newNode;
        printf("Key is inserted!\n");
        return;
    }
    else{
        if(((*root) -> data) == key){
            printf("Key found!");
            return;
        }
        else if (((*root) -> data) > key){
            searchOrInsert(&((*root) -> left), key);
        }
        else{
            searchOrInsert(&((*root) -> right), key);
        }
    }
}

Node* getSucc(Node* root){
    Node* succ = root -> right;
    while(succ != NULL && succ -> left != NULL){
        succ = succ -> left;
    }
    return succ;
}
void deletionBST(Node* root, int key){
if(!root) return;
if(root -> data > key){
    deletionBST(root -> left, key);
}
else if(root -> data < key){
    deletionBST(root -> right, key);
}
else{
    if(root -> left == NULL){
        Node* temp = root -> right;
        root -> data = temp -> data;
        free(root);
        
    }
}
}

int main(){
    Node* root = NULL;
    int arr[] = {30, 20, 40, 10, 25, 35, 45, 42, 43};
    for (int i = 0; i < (sizeof(arr)/ sizeof(arr[0])); i++){
        buildBST(&root, arr[i]);
    }

   // inorder(root);
   levelOrder(root);
//    insertInBST(&root, 27);
deletionBST(root, 42);
    printf("\n");
    levelOrder(root);
    // searchOrInsert(&root, 42);
    // printf("\n");
    // searchOrInsert(&root, 41);
    // Node* succ = getSucc(root);
    // printf(" %d", succ -> data);
}