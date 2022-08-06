#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;



void create()
{int n, i;
    printf("number of nodes: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        
    struct node *newnode, *temp;
    int item;
    newnode=malloc(sizeof(struct node*));

    printf("Enter the element-%d: ",i);
    scanf("%d", &item);

    newnode->data = item;
    temp=head;

    if(temp==NULL)
    {
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
    }

    printf("Node Inserted\n");
} 

void display(){  
    struct node *temp;
    temp=head;
    if(temp==NULL)
    {
        printf("Linked List is Empty\n");
    }
    else
    {
        printf("\nPrinting data of the Linked List: ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n\n================================\n\n");
    }
} 

void delete(){
    
    if(head==NULL)
    {
        printf("\nList is already empty\n");
    }
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
        printf("node deleted\n");
    }
    else
    {
        struct node *temp1, *temp2;
        temp1=temp2=head;
        while(temp1->next!=NULL)
        {
            temp2=temp1;
            temp1=temp1->next;
        }
        temp2->next=NULL;
        free(temp1);
        temp1=NULL;
        printf("node deleted\n");
    }

}

int main(){
    
int choice;

while (1)
{
    printf("1.For create node\n2.For delete\n3.For display\n4.For exit\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        create();
        break;
    case 2:
        delete();
        break;
    case 3: 
        display();
        break;
    case 4: 
        exit(0);
        break;
    default:
        printf("invalid input\n");
    }

    printf("\n");
}


    return 0;
}
