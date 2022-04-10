#include<stdio.h>
void print(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void merge(int arr[], int l, int m, int r)
{
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];
    int i,j,k;
    for(i=0;i<n1;i++)
    {
        L[i] = arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j] = arr[m+j+1];
    }
    i=0; j=0; k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int l, int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
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
    mergesort(arr,0,n-1);
    printf("\n\n");
    print(arr,n);
    return 0;
}
