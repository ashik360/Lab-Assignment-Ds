#include<stdio.h>
main(){
    int arr[50];
    int n; int i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nEnter %d elements: \n", n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("\n\nThe data in the array is: \n");
    for(i=0;i<n;i++)
    {
    printf("%d\t",arr[i]);
    }
    int j;
    printf("\nEnter the position to delete: ");
    scanf("%d",&j);
        while(j<n)
        {
            arr[j-1]=arr[j];
            j++;
        }
    n-=1;
    printf("\nThe data left in array after delete: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
    }
