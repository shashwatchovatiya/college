#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *front = 0, *rear = 0;

void enqueue(int x)
{
    struct node *new1;
    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = x;
    new1->next = 0;
    if (front == 0 && rear == 0)
    {
        front = rear = new1;
    }
    else
    {
        rear->next = new1;
        rear = new1;
    }
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
        printf("Underflow");
    else
    {
        printf("Dequeue element is : %d", front->data);
        front = front->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    if (front == 0 && rear == 0)
        printf("Underflow");
    else
    {
        temp = front;
        while (temp != 0)
        {
            printf("\nqueue element is : %d", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int nu, x;
    printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
    printf("\nEnter your choice ?");
    scanf("%d", &nu);
    do
    {
        switch (nu)
        {
        case 1:
            printf("\nEnter the value : ");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nYou are exited");
            break;
        default:
            printf("\nInvalid");
        }
        printf("\nEnter the task number : ");
        scanf("%d", &nu);
    } while (nu != 0);

    return 0;
}