#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  Queue *queue = createQueue();

  // Enqueue elements into the queue
  printf("Enqueuing elements...\n");
  enqueue(queue, 1);
  enqueue(queue, 2);
  enqueue(queue, 3);
  enqueue(queue, 4);
  enqueue(queue, 5);

  // Print the front element of the queue
  printf("Front element is: %d\n", front(queue));

  // Dequeue elements from the queue
  printf("Dequeuing elements...\n");
  printf("%d\n", dequeue(queue));
  printf("%d\n", dequeue(queue));
  printf("%d\n", dequeue(queue));
  printf("%d\n", dequeue(queue));
  printf("%d\n", dequeue(queue));

  // Check if the queue is empty
  if (isQueueEmpty(queue)) {
    printf("Queue is empty\n");
  } else {
    printf("Queue is not empty\n");
  }

  // Clean up memory
  free(queue);

  return 0;
}