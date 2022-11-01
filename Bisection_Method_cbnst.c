#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) pow(x,3)-4*x+1
#define e 0.001

int main()
{
	float f0,f1,f2,x0,x1,x2;
	printf("Enter the value of x0 and x1: "); scanf("%f %f",&x0,&x1);
	int i=0;
	do
	{
		f0 = f(x0);
		f1 = f(x1);
		x2 = (x0+x1)/2;
		f2 = f(x2);
		if(f0*f2<0)
		{
			x1 = x2;
		}
		else
		{
			x0 = x2;
		}
		i++;
		printf("No. of iterations are: %d\t",i);
		printf("Root are: %f\t",x2);
		printf("Function are: %f\n",f2);
	} while (fabs(f2)>e);
	
}
