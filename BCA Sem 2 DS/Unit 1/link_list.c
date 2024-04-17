#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;

int count = 0;

void create()
{
    int n, i;
    struct node *newnode, *temp;
    printf("Enter no. of Element : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            head = newnode;
        }
        else
        {
            newnode->next = (struct node *)malloc(sizeof(struct node));
            newnode = newnode->next;
        }
        printf("\n Enter The Value : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
    }
}

void display()
{
    struct node *temp;
    temp = head;
    while (temp->next != NULL)
    {
        printf("\n %d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\n %d", temp->data);
}

void deletbeg()
{
    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
    printf("\n After Delete First node list is : \n");
    display();
}

void deletend()
{
    struct node *temp, *curr;
    temp = head;
    while (temp->next != NULL)
    {
        curr = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        curr->next = 0;
    }
    free(temp);
    printf("\n After Delete Last : ");
    display();
}

void deletespe()
{
    struct node *nextnode,*temp;
    int pos, i = 1;
    temp = head;
    printf("\nEnter Value : ");
    scanf("%d", &pos);
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}

void insertbeg(int ch)
{
    struct node *beg;
    beg = (struct node *)malloc(sizeof(struct node));
    beg->data = ch;
    beg->next = head;
    head = beg;
    display();
}

void insertend(int ch)
{
    struct node *end, *temp;
    end = (struct node *)malloc(sizeof(struct node));
    end->data = ch;
    end->next = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = end;
    display();
}

void insertatpartafter() /*After A Node*/
{
    int pos, i = 1;
    struct node *temp, *part;
    printf("\n Enter the Position");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("Invalid Position");
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        part = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data : ");
        scanf("%d", &part->data);
        part->next = temp->next;
        temp->next = part;
    }
}

void insertatpartbefore()
{
    int pos, i = 1;
    struct node *temp, *newnode;
    printf("\nEnter The Position");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("Invalid Position");
    }
    else
    {
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data");
        scanf("%d", &newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void main()
{
    create();
    display();
    // insertatpartbefore();
    deletbeg();
    deletespe();
    display();
    printf("\nafter delete spacifice code \n");
    deletend();
    insertatpartafter(0);
    display();
    printf("\nInsertion at parameter after \n");
    insertatpartbefore(0);
    display();
    printf("\nInsertion at parameter before \n");
    printf("\nInsertion at Begning\n");
    insertbeg(001);
    display();
    printf("\nInsertion at End \n");
    insertend(999);
    display();
}