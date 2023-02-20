# Queue
This is a simple implementation of a queue data structure in C. The queue is implemented using a linked list. The queue data structure is defined in queue.h and implemented in queue.c.

## Usage
### Initialization
To use the queue, include the queue.h header file in your code and create a new queue using the `createQueue()` function. This will return a pointer to the new queue.

~~~C
#include "queue.h"
#include <stdio.h>

int main() {
  Queue *queue = createQueue();
  return 0;
}
~~~

### Enqueue
To add an element to the queue, use the `enqueue()` function. This function takes a queue and an integer value as input and adds the value to the end of the queue.

~~~C
enqueue(queue, 42);
~~~

### Dequeue
To remove an element from the queue, use the `dequeue()` function. This function takes a queue as input and removes and returns the first element in the queue.


~~~C
int value = dequeue(queue);
~~~

### Front
To get the value of the first element in the queue without removing it, use the `front()` function. This function takes a queue as input and returns the value of the first element in the queue.

~~~C
int value = front(queue);
~~~
### Empty

To check if the queue is empty, use the `isQueueEmpty()` function. This function takes a queue as input and returns 1 if the queue is empty and 0 if it is not.

~~~C
if (isQueueEmpty(queue)) {
  // Queue is empty
}
~~~


## License
This code is released under the [MIT License](https://opensource.org/license/mit/)
