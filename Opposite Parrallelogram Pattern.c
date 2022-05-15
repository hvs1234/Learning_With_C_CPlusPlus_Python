#include<stdio.h>
int main()
{
    int n,k=0; printf("Enter last row:"); scanf("%d",&n);
    for(int i=1;i<=n;i++,k=0)
    {
        for(int j=1;j<=i;j++)
        {
            printf("  ");
        }
        while(k!=n-1){ printf(" #"); k++; }
        printf("\n");
    }
    return 0;
}
