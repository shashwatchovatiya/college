#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for clear function
#define MAX 100

// Stack structure definition
struct Stack {
   int top;
   char items[MAX];
};

void clearConsole() {
    system("clear"); // For Unix/Linux systems
    // system("cls"); // For Windows systems
}
// Function to push a character onto the stack
void push(struct Stack *stack, char item) {
   if (stack->top == MAX - 1) {
       printf("Overflow stack!\n");
       return;
   }
   stack->items[++stack->top] = item;
}

// Function to pop a character from the stack
char pop(struct Stack *stack) {
   if (stack->top == -1) {
       printf("Empty Stack!\n");
       return '\0';
   }
   return stack->items[stack->top--];
}

// Function to reverse a string using a stack
void reverse_string(char *str) {
   struct Stack stack;
   stack.top = -1;
   int len = strlen(str);

   // Push each character of the string onto the stack
   for (int i = 0; i < len; i++) {
       push(&stack, str[i]);
   }

   // Pop characters from the stack to reverse the string
   for (int i = 0; i < len; i++) {
       str[i] = pop(&stack);
   }
}

// Main function
int main() {
   char str[MAX];
   clearConsole(); // clear Consol Function
   printf("Enter a string: ");
   scanf("%s", str);

   // Reverse the string
   reverse_string(str);

   printf("Reversed string is: %s\n", str);

   return 0;
}