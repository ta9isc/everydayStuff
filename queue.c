#include <stdio.h>
#include <stdbool.h>
#include "queue.h"

// typedef struct queue{
//     /* data */
//     int arr[100];
//     int front;
//     int rear;
// } queue;

void enqueue(queue *q, int value){ 
int size = sizeof(q->arr)/sizeof(q->arr[0]);
if(q -> front == (q -> rear + 1) % size){
    printf("Overflow!\n");
    return;
}
else{
    if(q -> front == -1 && q -> rear == -1){
       q -> front = 0, q -> rear = 0;
       q -> arr[q -> rear] = value;
    }
    else{
        q -> rear = (q -> rear + 1) % size;
        q -> arr[q -> rear] = value;
    }
}
}

bool isEmpty(queue *q){
    if(q -> front == -1 && q -> rear == -1){
        return true;
    }
    return false;
}

void deque(queue* q){
    int size = sizeof(q -> arr)/ sizeof(q -> arr[0]); 
    if(isEmpty(q)){
        printf("Queue is empty!\n");
    }
    else{
        if(q -> front == q -> rear){
            q -> front = -1;
            q -> rear = -1;
        }
        else{
            q -> front = (q -> front + 1) % size;
        }
    }
}

bool isFull(queue* q){
    if(q -> front == (q -> rear + 1) % (sizeof(q -> arr)/ sizeof(q -> arr[0]))){
        return true;
    }
    return false;
}

// only for checking if the circular concept is working or not
// void traverseQueue(queue *q){
//     if(isEmpty(q)){
//         printf("Queue is empty\n");
//         return;
//     }
//    for (int i = 0; i < (sizeof(q -> arr )/sizeof( q -> arr[0])); i++){
//     printf("%d ", q -> arr[i]);
//    }
//    printf("\n");

// }
void traverseQueue(queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    int size = sizeof(q->arr) / sizeof(q->arr[0]);
    int i = q->front;

    while (1) {
        printf("%d ", q->arr[i]);

        if (i == q->rear)
            break;

        i = (i + 1) % size;
    }

    printf("\n");
}


// int main(){

// queue Q;
// Q.front = Q.rear = -1;
// enqueue(&Q, 10);
// enqueue(&Q, 20);
// enqueue(&Q, 30);
// enqueue(&Q, 40);
// enqueue(&Q, 50);

// deque(&Q);
// enqueue(&Q, 60);
// deque(&Q);
// enqueue(&Q, 70);
// deque(&Q);
// enqueue(&Q, 80);
// deque(&Q);
// enqueue(&Q, 90);
// deque(&Q);
// enqueue(&Q, 100);

// printf("%s\n", isFull(&Q)? "Yes" : "No");
// traverseQueue(&Q);
// return 0;
// }
