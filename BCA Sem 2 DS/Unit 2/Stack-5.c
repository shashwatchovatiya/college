#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> // for clear function

char stack[100];
int top = -1;

void clearConsole() {
    system("clear"); // For Unix/Linux systems
    // system("cls"); // For Windows systems
}

void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if (top == -1)
    {
        /* code */
        return -1;
    }
    else
    {
        return stack[top--];
    }
}



int priority(char x)
{
    if (x == '(')
    {
        return 0;
    }
    else if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/' || x == '%')
    {
        return 2;
    }
    else if (x == '^')
    {
        return 3;
    }
    else
    {
        // Handle unknown characters or operators
        return -1; // or any default priority level you choose
    }
}

int main()
{
    /* code */
    char exp[100];
    char x;
    int i;
    // clrscr()
     clearConsole(); // clear Consol Function
    printf("Enter the expression : ");
    scanf("%s", exp);
    printf("\n");

    i = 0;
   
    while (exp[i] != '\0')
    {
        if (isalnum(exp[i]))
        {
            printf("%c", exp[i]);
        }
        else if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            while ((x = pop()) != '(')
            {
                printf("%c", x);
            }
        }
        else
        {
            while (priority(stack[top]) >= priority(exp[i]))
            {
                printf("%c", pop());
            }
            push(exp[i]);
        }
        i++;
    }

    while (top != -1)
    {
        /* code */
        printf("%c ", pop());
    }
    printf("\n");
    // getch();
    return 0;
}
