#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
    struct Node* left;
    int data;
    struct Node* right;
}Node;


Node* insertFun(Node** root, Node* child){
    if(*root == NULL){
        *root =  child;
        return;
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
  Node** temp = root;
  if(((*temp)-> data) == key){
    Node** lChild = ((*temp) -> left);
    Node** rChilid = ((*temp) -> right);
    insertFun(&root, lChild);
    insertFun(&root, rChilid);
  }

  
}