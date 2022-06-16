#include<stdio.h>
int arr[100],i,size,choice,pos,elem;
void create();
void display();
void insert();
void Delete();
int main()
{ int size;
    while(1){
        printf("1.Create array\n2.Display array\n3.Insert element in array\n4.Delete element of array\n5.Exit the program\nEnter your choice number: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        create();
        break;

    case 2:
        display();
        break;

    case 3:
        insert();
        break;

    case 4:
        Delete();
        break;

    case 5:
        exit(0);
        break;
    default:
        printf("invalid input. please enter the number from 1 to 5 \n");

    }
    printf("\n------------------------------------\n");
    }

    return 0;

}

void create()
    {
        int i;
        printf("Enter the array size: ");
        scanf("%d",&size);
        printf("Enter the array element: ");
        for(i=0; i<size; i++)
        {
            scanf("%d",&arr[i]);
        }

    }
    void display()
    {
        printf("Resultant array is: \n");
        for(i=0; i<size; i++)
        {
            printf("%d ",arr[i]);
        }
    }
   void insert(){
        printf("Enter the position number where you insert element: ");
        scanf("%d",&pos);
        if(pos>=0 && pos<=size){
            printf("Enter the value of new element: ");
        scanf("%d",&elem);
        size++;
        for(i=size;i>=pos;i--){
            arr[i] = arr[i-1];
        }
        arr[pos-1] = elem;
        printf("After insertion ");
        display();
        }
        else{
            printf("Invalid position!Please enter valid position: ");
        }
    }
    void Delete(){
    printf("Enter the position number which element you want to delete: ");
    scanf("%d",&pos);
    size--;
    if(pos>=0 && pos<=size){
        for(i=pos-1;i<size;i++){
            arr[i] = arr[i+1];
        }
        printf("After deletion ");
        display();
    }
    else{
        printf("Invalid position!Please enter valid position: ");
    }
    }
