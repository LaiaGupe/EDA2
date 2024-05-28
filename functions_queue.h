#include "initializations.h"
#include <stdlib.h>
#include <time.h>


//---------------------FUNCTIONS FOR THE QUEUE--------------------------

// Define the structure for the queue node
typedef struct Node {
    const char *data;
    struct Node *next;
} Node;

// Define the structure for the queue
typedef struct Queue {
    Node *front;
    Node *rear;
} Queue;

// Function to create a new node
Node* createNode(const char *data);

// Function to initialize the queue
void initializeQueue(Queue *q);

// Function to check if the queue is empty
int isEmpty(Queue *q);

// Function to enqueue an element
void enqueue(Queue *q, const char *data);

// Function to dequeue an element
const char* dequeue(Queue *q);

// Function to print the queue
void printQueue(Queue *q);

void combat(Enemy *enemy, Character current_character);
