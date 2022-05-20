// Queue in C
#include <stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, last = -1;

int main()
{

    // enQueue 5 elements
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    // 6th element can't be added to because the queue is full
    enQueue(6);

    display();

    // deQueue removes element entered first i.e. 1
    deQueue();

    // Now we have just 4 elements
    display();

    return 0;
}

void enQueue(int value)
{
    if (last == SIZE - 1)
        printf("\nQueue is Full!!");
    else
    {
        if (front == -1)
            front = 0;
        last++;
        items[last] = value;
        printf("\nAdded %d", value);
    }
}

void deQueue()
{
    if (front == -1)
        printf("\nQueue is Empty!!");
    else
    {
        printf("\nDeleted : %d", items[front]);
        front++;
        if (front > last)
            front = last = -1;
    }
}

// Function to print the queue
void display()
{
    if (last == -1)
        printf("\nQueue is Empty!!!");
    else
    {
        int i;
        printf("\nQueue elements are:\n");
        for (i = front; i <= last; i++)
            printf("%d  ", items[i]);
    }
    printf("\n");
}