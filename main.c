#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void print ();
void Enqueue(int);
void Dqueue();


int front = -1;
int rear = -1;

int arr [SIZE];

int main()
{

    Enqueue(8);
    Enqueue(5);
    Enqueue(3);
    Enqueue(2);

    print();

    Dqueue();
    Dqueue();
    Dqueue();
    Dqueue();

    print();

    return 0;
}

void Enqueue (int num)
{
    if ((rear + 1)% SIZE == front) // circular array is FULL
        return;

    if (front == -1 && rear == -1) // array is empty
    {
        front = rear = 0;
        arr[rear] = num;
    }

    else
    {
        rear = (rear + 1) % SIZE;
        arr[rear] = num;
    }

}

void Dqueue ()
{

    if (front == -1 && rear == -1) // array is empty
        return;

    else if (rear == front)
    {
        rear = front = -1;
    }
    else
    {
        front = (front + 1) % SIZE;

    }

}

void print ()

{
    int i;

    for (i=front; i <= rear; i++)
    {
        if (front == -1 && rear == -1) // array is empty
            break;

        printf("%i\n", arr[i]);
    }
}

