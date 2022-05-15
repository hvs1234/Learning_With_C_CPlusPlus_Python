#include<stdio.h>
int main()
{
    int I , II;
    int n; printf("\nEnter the size of array:"); scanf("%d",&n); int a[50],i=0;
    printf("\nEnter %d elements:",n);
    
    for(i=0;i<n;i++){ scanf("%d",&a[i]); }
    
    I = II = a[0];
    
    for(i=0;i<n;i++){ if(a[i]>I){ II=I; I=a[i]; } else if(a[i]>II && a[i]<I){ II=a[i]; } }
    
    printf("\nSecond largest element in the array is:%d",II);
    
    return 0;

}
