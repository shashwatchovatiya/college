// stack Using Array

#include <stdio.h>
#define N 10


int stack[N];
int top = -1;

void push()
{
    int x;
    printf("Enter the element to be pushed : ");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("Stack is overfull \n");
        return;
    }
    else
    {
        top++;
        stack[top] = x;
        printf("%d is Pushed", x);
        printf("\n");
    }
}


void pop(){
    if(top>=0){
        printf("\n pop element is %d ",stack[top]);
        top--;
    }else{
        printf("Underflow");
    }
}

void peep(){
    if(top>=0){
        printf("\n peep element is %d ",stack[top]);
        top--;
    }else{
        printf("Underflow");
    }
}

void display(){
    for (int i=top;i>=0;i--){
        printf("\n %d is Pushed",stack[i]);
    }
}

int main(){
    push();
    push();
    push();
    display();
    peep();
    pop();
    peep();
    pop();
    display();
    push();
    display();
    return 0;
}

