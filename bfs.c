#include <stdio.h>
#include <stdlib.h>
/* Create the tree recursively */


typdef struct Node{
    int data;
    struct Node* left;
    strcut Node* right;
}Node;
void buildTree(Node *root)
{
    int leftValue, rightValue;

    printf("Enter the left child of %d (-1 for no child): ", root->data);
    scanf("%d", &leftValue);

    if (leftValue == -1) {
        root->left = NULL;
    } else {
        root->left = malloc(sizeof *root->left);

        if (root->left == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        root->left->data = leftValue;
        buildTree(root->left);
    }


    printf("Enter the right child of %d (-1 for no child): ", root->data);
    scanf("%d", &rightValue);

    if (rightValue == -1) {
        root->right = NULL;
    } else {
        root->right = malloc(sizeof *root->right);

        if (root->right == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        root->right->data = rightValue;
        buildTree(root->right);
    }
}


/* Inorder traversal */
void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}


/* Free the entire tree */
void freeTree(Node *root)
{
    if (root == NULL)
        return;

    freeTree(root->left);
    freeTree(root->right);
    free(root);
}


int main(void)
{
    Node *root = malloc(sizeof *root);

    if (root == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the root node: ");
    scanf("%d", &root->data);

    buildTree(root);

    printf("\nInorder traversal: ");
    inorder(root);
    printf("\n");

    freeTree(root);

    return 0;
}
```



void bfs(struct node* root){
   struct node* queue[1000];
    int front = 0, rear = 0;
    queue[rear++] = root;
    while(front < rear){
        struct node* curr = queue[front++];
        printf(" %d", curr -> data);
        if(curr -> left){
            queue[rear++] = curr -> left;

        }
        if(curr -> right){
            queue[rear++] = curr -> right;
        }
    }
}