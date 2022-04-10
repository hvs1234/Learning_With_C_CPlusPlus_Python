#include<stdio.h>
void print(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i=low+1;
    int j = high; int temp;
    do{
       while(arr[i]<=pivot) i++;
       while(arr[j]>pivot) j--;
       if(i<j)
       {
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
       }
    } while(i<j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j; 
}
void quicksort(int arr[], int low, int high)
{
    int p;
    if(low<high)
    {
        p = partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
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
    quicksort(arr,0,n-1);
    printf("\n\n");
    print(arr,n);
    return 0;
}
