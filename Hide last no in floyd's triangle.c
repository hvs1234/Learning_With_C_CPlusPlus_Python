//Hide last no. in Floyd's Triangle.
#include<stdio.h>
int main()
{
    int r;   printf("Enter last rows in the pattern:"); scanf("%d",&r); intr a=1;
    for(int i=1;i<=r;i++){ a++;
        for(int j=1;j<=i;j++){ printf("%d ",a); a++ ; } printf("\n");  
    }
    return 0;
}
