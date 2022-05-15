#include<stdio.h>
int main()
{
    int n=8;
    int c=2*n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c;j++)
        {
            if((i+j==n-1)||(j-i==n-1)||(i==n-1)){ printf("  "); } else{ printf(" #"); }
        }
        printf("\n");
    }
    return 0;
} 
