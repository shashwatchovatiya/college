#include <stdio.h>


#define n 5
int queue[n];
int front = -1, rear = -1;

void enqueue(int value)
{
    if ((rear + 1) % n == front)
    {
        printf("\nQueue is full");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = value;
    }
    else
    {
        rear = (rear + 1) % n;
        queue[rear] = value;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
    }
    else if (front == rear)
    {
        printf("\n %d", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("\n dequeu element is %d", queue[front]);
        front = (front + 1) % n;
    }
}
void display()
{
    int i;
    i = front;
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        while (i != rear)
        {

            printf("\n%d", queue[i]);
            i = (i + 1) % n;
        }
        printf("\n%d", queue[i]);
    }
}

void main()
{
    int value, x;
    printf("\n*************************Main Menu*****************************\n");  
    printf("\n=================================================================\n");  
    printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
    printf("\nEnter your choice ?");  
    scanf("%d", &x);

    do
    {
        switch (x)
        {
        case 1:
            printf("\nEnter the value :");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit");
            break;
        default:
            printf("\nEnter the valid number !");
            break;
        }
        printf("\n Enter the value to perform functions  :");
        scanf("%d", &x);
    } while (x != 0);

   
}