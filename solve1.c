#include <stdio.h>
#include "queue.h"

int main(){
    queue Q;
    Q.front = Q.rear = -1;

    enqueue(&Q, 10);
    enqueue(&Q, 20);
    enqueue(&Q, 30);
    traverseQueue(&Q);

    return 0;
}