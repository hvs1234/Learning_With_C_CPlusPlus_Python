//Diamond pattern
#include<stdio.h>
void d_p(int r, int r1)
{
    int k=0,i,j,i1,j1,k1=0;
    for(i=1;i<=r;i++,k=0){ for(j=1;j<=r-i;j++){ printf("  "); } while(k!=2*i-1){ printf(" #"); k++; } printf("\n"); }
    
    for(i1=r1;i1>=1;i1--,k1=0){ for(j1=1;j1<=r1-i1;j1++){ printf("  "); } while(k1!=2*i1-1){ printf(" #"); k1++; } printf("\n"); }
}
int main()
{ 
    int n,n1; printf("Enter the last terms of diamond pattern:"); scanf("%d %d",&n,&n1);
    d_p(n,n1);
    return 0;
}  
