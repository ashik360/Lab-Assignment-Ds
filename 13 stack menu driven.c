#include<stdio.h>
#include<stdlib.h>
#define max 5

int top = -1, stack[max];

void push(){
    int elem,n;
    if(top == max - 1){
        printf("Stack is overflow.\n");
    }
    else{
       printf("How many element you want to be pushed: ");
       scanf("%d",&n);
       for (int i = 1; i<= n; i++)
       {
        printf("Enter the element to be pushed: ");
        scanf("%d",&elem);
        top = top +1;
        stack[top] = elem;
       }
       
    }
}

void pop(){
    if(top == -1){
        printf("Stack is empty.\n");
    }
    else{
        printf("Poped element is: %d\n", stack[top]);
        top--;
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty.\n");
    }
    else{
        int i;
        printf("Stack elements are: ");
        for(i=top; i>=0;i--){
            printf("%d ",stack[i]);
        }
    }
    printf("\n==================================\n");
}

int main(){
    while(1){
        int choice;
    printf("Press\n1.For push\n2.For pop\n3.For display\n4.For exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
    case 1:
        push();
        break;

    case 2:
        pop();
        break;

    case 3:
        display();
        break;

    case 4:
        exit(0);
        break;

    default:
        printf("Invalid input!!");
    }
    }
}
