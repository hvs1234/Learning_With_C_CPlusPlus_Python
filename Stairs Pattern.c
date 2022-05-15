#include<stdio.h>
int main()
{
    int r,k=0; printf("Enter last row in the pattern:"); scanf("%d",&r);
    for(int i=1;i<=r;i++,k=0){ for(int j=1;j<=i;j++){ printf("  "); } while(k!=i-1){ printf(" #"); k++; }  printf("\n"); }
    return 0;
} 
