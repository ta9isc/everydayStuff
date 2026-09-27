#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
   struct Node* left;
   struct Node* right;
}Node;


void buildTree(Node* root){
    root -> left = malloc(sizeof(Node));
    root -> right = malloc(sizeof(Node));
    printf("Enter the left child of %d: ", root -> data);
    scanf("%d", &root -> left -> data);
    printf("Enter the right child of %d: ", root -> data);
    scanf("%d", &root -> right -> data);

    if(root -> left -> data != -1){
        buildTree(root-> left);
    }
    else{
        free(root -> left);
        root -> left = NULL;
    }
    if(root -> right -> data != -1){
        buildTree(root -> right);
    }
    else{
        free(root -> right);
        root -> right = NULL;
    }
}


void inorder(Node* root){
    if(!root) return;
    inorder(root->left);
    printf(" %d", root -> data);
    inorder(root -> right);
}

int  bfs(Node* root, int sum){
    if(!root) return sum;

    Node* q[10000];
    int front = 0, rear = 0;
    q[rear++] = root;
    while(front < rear){
        Node* curr = q[front++];
        // printf(" %d", curr -> data);
        sum += curr -> data;
        if(curr -> left){
            q[rear++] = curr -> left;
        }
        if(curr -> right){
            q[rear++] = curr -> right;
        }
    }
    return sum;
}

void dfspreorder(Node* root){
    Node* stack[1000];
    int top = -1;
    Node* temp = root;
    while(temp != NULL || top != -1){
        if(temp != NULL){
            printf(" %d", temp -> data);
            stack[++top] = temp;
            temp = temp -> left;
        }
        else{
            temp = stack[top--];
            temp = temp -> right;
        }
    }
}

void  dfsinorder(Node* root){
    Node* s[1000];
    int top = -1;
    Node*temp = root;
    while(temp != NULL || top != -1){
        if(temp != NULL){
            s[++top] = temp;
            temp = temp -> left;
        }
        else{
            temp = s[top--];
            printf(" %d", temp -> data);
            temp = temp -> right;
        }
    }
}

void dfspostorder(Node* root){
    Node* s[1000];
    int top = -1;
    Node* temp = root;
    Node* lastVisited = NULL;

    while(temp != NULL || top != -1){
        if(temp != NULL){
            s[++top] = temp;
            temp = temp -> left;
        }
        else{
            Node* t = s[top];
            if(t -> right != NULL && lastVisited != t -> right){
                temp = t -> right;
            }
            else{
                printf(" %d", t -> data);
                lastVisited = t;
            }
        }
    }
}
int main(){
    Node* left = NULL;
    Node* right = NULL;
    Node* root = malloc(sizeof(Node));
    printf("Enter the root node:  ");
    scanf("%d", &root -> data);
    buildTree(root);
    // inorder(root);
//    printf("%d", bfs(root, 0));
// dfsinorder(root);
// dfspreorder(root);
dfspostorder(root);

    
}


// ```c
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node *left;
//     struct Node *right;
// } Node;


// /* Create the tree recursively */
// void buildTree(Node *root)
// {
//     int leftValue, rightValue;

//     printf("Enter the left child of %d (-1 for no child): ", root->data);
//     scanf("%d", &leftValue);

//     if (leftValue == -1) {
//         root->left = NULL;
//     } else {
//         root->left = malloc(sizeof *root->left);

//         if (root->left == NULL) {
//             printf("Memory allocation failed.\n");
//             exit(1);
//         }

//         root->left->data = leftValue;
//         buildTree(root->left);
//     }


//     printf("Enter the right child of %d (-1 for no child): ", root->data);
//     scanf("%d", &rightValue);

//     if (rightValue == -1) {
//         root->right = NULL;
//     } else {
//         root->right = malloc(sizeof *root->right);

//         if (root->right == NULL) {
//             printf("Memory allocation failed.\n");
//             exit(1);
//         }

//         root->right->data = rightValue;
//         buildTree(root->right);
//     }
// }


// /* Inorder traversal */
// void inorder(Node *root)
// {
//     if (root == NULL)
//         return;

//     inorder(root->left);
//     printf("%d ", root->data);
//     inorder(root->right);
// }


// /* Free the entire tree */
// void freeTree(Node *root)
// {
//     if (root == NULL)
//         return;

//     freeTree(root->left);
//     freeTree(root->right);
//     free(root);
// }


// int main(void)
// {
//     Node *root = malloc(sizeof *root);

//     if (root == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     printf("Enter the root node: ");
//     scanf("%d", &root->data);

//     buildTree(root);

//     printf("\nInorder traversal: ");
//     inorder(root);
//     printf("\n");

//     freeTree(root);

//     return 0;
// }
// ```


