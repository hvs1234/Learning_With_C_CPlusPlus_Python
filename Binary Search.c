#include<stdio.h>
int binarysearch(int a[], int size, int element)
{
    int i=0; int low,mid,high; low=0;high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==element)
           return mid;
        if(a[mid]<element)
           low=mid+1;
        else{
            high=mid-1;
        }
    }
}
int main()
{
    int a[] =  {1,2,12,25,36,47,58,67,72,81,95,101};
    int size=sizeof(a)/sizeof(int);
    int element; printf("\nEnter the element you want to search using binary searching:"); scanf("%d",&element);
    int search;
    search = binarysearch(a,size,element);
    printf("\nElement %d was found in index %d",element,search);
    return 0;
}
