#include<stdio.h>
int main()
{
    int n; printf("Enter the size of array:"); scanf("%d",&n);
    int a[100]; int i=0; int *l,b;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l = a;
    *l = *a;
    for(int i=0;i<n;i++)
    {
        if(*(a+i)>*l)
           *l = *(a+i); b=i+1;
    }
    printf("\nLargset element in the array is: %d",*l);
    return 0;
}
