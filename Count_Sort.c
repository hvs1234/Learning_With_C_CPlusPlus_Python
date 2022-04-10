#include<stdio.h>
void print(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void countsort(int arr[], int n)
{
    int max = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max) max = arr[i];
    }
    int count[1000], output[1000];
    for(int i=0;i<=max;i++)
    {
        count[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<=max;i++)
    {
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        arr[i] = output[i];
    }
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n\nEnter %d elements in the array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    print(arr,n);
    countsort(arr,n);
    printf("\n\n");
    print(arr,n);
    return 0;
}
