#include<stdio.h>
#define MAX 100
void f(int arr[], int n)
{
    int i=0;
    for(int i=0;i<n;i++) { printf("%d ",arr[i]); }
    printf("\n");
}

int A_I(int arr[], int size, int element,int index, int capacity)
{
    int i=0; if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int size = 9;
    int arr[MAX],i=0; printf("Enter the array:"); for(int i=0;i<size;i++) { scanf("%d",&arr[i]); }
    printf("\nGiven Array is:"); int index=5;
    f(arr,size); printf("\nArray after insert an element in index %d is:",index);
    A_I(arr,size,45,index,100);
    size+=1;
    f(arr,size);
    return 0;
}
