#include<stdio.h>
int main()
{

    int arr[]={14,3,60,4,32,15};
    int max=arr[0];
    int i,  loc=1;
    printf("Given array is: \n");

    for(i=0;i<6;i++)
        {
        printf("%d\t",arr[i]);
        }
    printf("\n");
    for (i=0;i<6;i++)
    {
    if(arr[i]>max)
    {
    max=arr[i];
    loc=i;
    }
    }
    printf("\n The max value is: %d\n  The location of the Max value: %d\n\n",max,loc);
    return 0;
}
