#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node 
{
	int value;
	struct node *next;
} node;

typedef struct 
{
	node *head;
	node *tail;
	int size;
} Queue;

Queue *create_queue()
{
	Queue *queue = (Queue *)malloc(sizeof(Queue));

	queue->head = NULL;
	queue->tail = NULL;
	queue->size = 0;

	return queue;
}

int size(Queue *queue)
{
	return queue->size;
}

bool is_empty(Queue *queue)
{
	return (queue->size == 0);
}

int peek(Queue *queue, bool *status)
{
	if (is_empty(queue))
	{
		*status = false;
		return (0);
	}
	*status = true;
	return queue->head->value;
}

void enqueue(Queue *queue, int value)
{
	node *newNode = (node *)malloc(sizeof(node));

	newNode->value = value;
	newNode->next = NULL;
	if (is_empty(queue))
	{
		queue->head = newNode;
		queue->tail = newNode;
	}
	else
	{
		queue->tail->next = newNode;
		queue->tail = newNode;
	}

	queue->size++;
}

int dequeue(Queue *queue, bool *status)
{
	if (is_empty(queue))
	{
		*status = false;
		return 0;
	}
	*status = true;

	int value = queue->head->value;
	node *oldHead = queue->head;
	if (queue->size == 1)
	{
		queue->head = NULL;
		queue->tail = NULL;
	}
	else
		queue->head = queue->head->next;
	free(oldHead);
	queue->size--;
	return value;
}

void destroy_queue(Queue *queue)
{
	node *currentNode = queue->head;
	while (currentNode != NULL)
	{
		node *temp = currentNode;
		currentNode = currentNode->next;
		free(temp);
	}
	free(queue);
}

int main(void)
{
  // Create a queue
  Queue *queue = create_queue();
  
  // The queue should initially be empty
  if (is_empty(queue)) printf("Queue is empty.\n");
  
  // Try to enqueue the value 4 onto the queue
  enqueue(queue, 4);
  
  // The queue should not be empty now
  if (!is_empty(queue)) printf("Queue is not empty.\n");
  
  // Enqueue the values 5 and 6 onto the queue
  enqueue(queue, 5);
  enqueue(queue, 6);
  
  // The queue size should now be 3
  printf("Queue size: %d\n", size(queue));
  
  
  // We'll try using the peek and dequeue operations.  We'll declare a bool 
  // variable to store the status returned via "pass-by-pointer", and a variable
  // value to store the value peek'ed or dequeued.
  bool status = false;
  int value = 0;
  
  // Peek at the value stored at the head of the queue, which should be 4
  value = peek(queue, &status);
  if (status) printf("Peek successful: %d\n", value);
  
  // Now dequeue the value
  value = dequeue(queue, &status);
  if (status) printf("Dequeue succesful: %d\n", value);
  

  // Peek and dequeue the next two values 5 and 6
  value = peek(queue, &status);
  if (status) printf("Peek successful: %d\n", value);
  
  value = dequeue(queue, &status);
  if (status) printf("Dequeue succesful: %d\n", value);
  
  value = peek(queue, &status);
  if (status) printf("Peek successful: %d\n", value);
  
  value = dequeue(queue, &status);
  if (status) printf("Dequeue succesful: %d\n", value);
  
  
  // Now the queue should be empty, so both peek and dequeue should fail with
  // the variable status being set to false as a result.
  value = peek(queue, &status);
  if (!status) printf("Peek unsuccessful.\n");
  
  value = dequeue(queue, &status);
  if (!status) printf("Dequeue unsuccesful.\n");
  

  // destroy/delete the queue 
  destroy_queue(queue);
  
  return 0;
}
