#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

// Function to create a new queue
Queue *createQueue() {
  Queue *queue = (Queue *)malloc(sizeof(Queue));
  queue->front = NULL;
  queue->rear = NULL;
  return queue;
}

// Function to create a new queue node with given data
QueueNode *createQueueNode(int data) {
  QueueNode *newNode = (QueueNode *)malloc(sizeof(QueueNode));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

// Function to add an element to the queue
void enqueue(Queue *queue, int data) {
  QueueNode *newNode = createQueueNode(data);

  if (queue->rear == NULL) {
    queue->front = newNode;
    queue->rear = newNode;
    return;
  }

  queue->rear->next = newNode;
  queue->rear = newNode;
}

// Function to remove an element from the queue and return its value
int dequeue(Queue *queue) {
  if (queue->front == NULL) {
    printf("Queue is empty\n");
    return -1;
  }

  QueueNode *temp = queue->front;
  queue->front = queue->front->next;

  if (queue->front == NULL)
    queue->rear = NULL;

  int data = temp->data;
  free(temp);
  return data;
}

// Function to return the value of the front element of the queue without
// removing it
int front(Queue *queue) {
  if (queue->front == NULL) {
    printf("Queue is empty\n");
    return -1;
  }

  return queue->front->data;
}

// Function to check if the queue is empty
int isQueueEmpty(Queue *queue) { return (queue->front == NULL); }