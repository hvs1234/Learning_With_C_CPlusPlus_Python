#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-4*x+1
#define df(x) 3*x*x-4

int main()
{
	int i=0;
	float x0,x1,f0,f1,df0;
	printf("Enter the value of x: "); scanf("%f",&x0);
    do
	{
		f0 = f(x0);
		df0 = df(0);
		x1 = x0 - (f0/df0);
		f1 = f(x1);
		x0 = x1;
		i++;
		printf("No. of iterations are: %d\t",i);
		printf("Root are: %f\t",x1);
        printf("Value of function are: %f\n",f1);
	} while (fabs(f1)>e);
	return 0;
}
