#include<stdio.h>
main()
{
    int arr[100];
    int n;
    int i;
    printf("Enter the size of the list: ");
    scanf("%d",&n);
    printf("\n\nEnter %d Elements: \n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe data in the list is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int j;
    printf("\nEnter the position of data to delete: ");
    scanf("%d",&j);
    while(j<n)
    {
        arr[j-1]=arr[j];
        j++;
    }
    n-=1;
    printf("\nThe data left in the list after deletion: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
