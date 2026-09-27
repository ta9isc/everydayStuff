#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

void buildBST(Node** root, int key){
   // if(key == -1) return;
    if(*root == NULL){
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = key;
        newNode -> left = NULL;
        newNode -> right = NULL;
        *root = newNode;
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

void levelOrderTraversal(Node* root){
    // if(!root) return;
    Node* Q[1000];
    int front = 0;
    int rear = 0;
    Q[rear++] = root;
    while(front < rear){
        int sizeOfLevel = rear - front;
        for (int i = 0; i < sizeOfLevel; i++){
            Node* curr = Q[front++];
            printf(" %d", curr -> data);
            if(curr -> left){
                Q[rear++] = curr -> left;
            }
            if(curr -> right){
                Q[rear++] = curr -> right;
            }

        }
        printf("\n");
    }
}
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root-> left);
    printf(" %d", root -> data);
    inorder(root -> right);
}

bool iterativeSearch(Node* root, int key){
    while(root != NULL){
        if(root -> data == key) return true;
        else if(root -> data > key){
            root = root -> left;
        }
        else{
            root = root -> right;
        }
    }
    return false;
}

bool search(Node* root, int key){
    if(root == NULL) return false;
    if(root -> data == key) return true;
    else if(root -> data > key) return search(root -> left, key);
    else  return search(root -> right, key);
}

Node* insertFun(Node** root, Node* child){
    if(*root == NULL){
        *root =  child;
        return (*root);
}
if(((*root)-> data)  > child -> data){
    return insertFun(&((*root) -> left), child);
}
return insertFun(&((*root) -> right), child);

}

void deletionInBST(Node** root, int key){
  if(*root == NULL){
    printf("Node not  found to delete");
    return;
  }
  Node** stroreRoot = root;
  if(((*root)-> data) == key){
    Node* lChild = ((*root) -> left);
    Node* rChilid = ((*root) -> right);
    *root = NULL;
    // (*root) -> left = NULL;
    // (*root)-> right = NULL;
    insertFun(&(*stroreRoot), lChild);
    insertFun(&(*stroreRoot), rChilid);
  }
  else if(((*root) -> data) > key){
    deletionInBST(&((*root) -> left), key);
  }
  else{
    deletionInBST(&((*root)-> right), key);
  }
}
int main(){
    Node* root = NULL;
    // int a[7] = {10, 35, 20, 30, 40, 25, 50};
    int a[8] = {30, 20, 35, 10, 25, 45, 42, 43};
    
    for (int i = 0; i < (sizeof(a)/ sizeof(a[0])); i++){
        buildBST(&root, a[i]);
    }
    levelOrderTraversal(root);
// //     printf("\n");
// //    inorder(root);
// // printf("%d",search(root , 40));
// printf(" %d", iterativeSearch(root, 40));
  deletionInBST(&root, 25);
  printf("\n");
  levelOrderTraversal(root);
  printf("\n");
  inorder(root);
}