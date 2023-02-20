#ifndef QUEUE_H
#define QUEUE_H

// Define the QueueNode structure
typedef struct QueueNode {
  int data;
  struct QueueNode *next;
} QueueNode;

// Define the Queue structure
typedef struct Queue {
  QueueNode *front;
  QueueNode *rear;
} Queue;

// Declare functions for the queue
Queue *createQueue();
QueueNode *createQueueNode(int data);
void enqueue(Queue *queue, int data);
int dequeue(Queue *queue);
int front(Queue *queue);
int isQueueEmpty(Queue *queue);

#endif