#include<stdio.h>
int main()
{
    int n,item;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the item to insert: ");
    scanf("%d",&item);
    arr[n]=item;
    n++;
    printf("The updated array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    return 0;
}
