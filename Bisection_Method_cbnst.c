#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Solving for expression of format: x^a + bx + c = 0
double res(int a,int b,int c,double x)
{
    return (pow(x,a)+b*x+c);
}
int main()
{
    printf("Enter values of a,b,c in expression (x^a + bx + c = 0): ");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double s,m,e=0;
    while(res(a,b,c,e)<0)
    e++;
    s=e-1;
    while(s<e)
    {
        double mid = (s+e)/2;
        if((int)(res(a,b,c,mid)*10000)==0)
        {
            printf("Final Result : %lf\n",mid);
            break;
        }
        else if(res(a,b,c,mid)>0)
        {
            if(res(a,b,c,e)>0)  e=mid;
            else                s=mid;
        }
        else if(res(a,b,c,mid)<0)
        {
            if(res(a,b,c,e)<0)  e=mid;
            else                s=mid;
        }
        printf("%lf\n",mid);
    }
    return 0;
}
