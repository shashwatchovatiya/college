#include <stdio.h>
#define MAX_SIZE 100

// Stack Using Array

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = value;
    printf("%d pushed to stack\n", value);
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    int popped = stack[top];
    top--;
    return popped;
}

int peep() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    display();
    printf("Popped: %d\n", pop());
    printf("Peeped: %d\n", peep());
    display();
    return 0;
}
