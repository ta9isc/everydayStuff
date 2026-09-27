#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef struct queue{
    int arr[100];
    int front;
    int rear;
}queue;

void enqueue(queue*q, int value);
bool isEmpty(queue*q);
void deque(queue*q);
bool isFull(queue*q);
void traverseQueue(queue*q);
#endif