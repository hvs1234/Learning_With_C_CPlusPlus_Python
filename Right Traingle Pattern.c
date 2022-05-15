#include<stdio.h>
int main()
{
    int r,k=0; printf("Enter last row in the pattern:"); scanf("%d",&r);
    for(int i=1;i<=r;i++){ for(int j=1;j<=i;j++){ printf(" #"); } printf("\n"); }
    return 0;
} 
