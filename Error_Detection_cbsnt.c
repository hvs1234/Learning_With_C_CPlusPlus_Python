#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double n;
    printf("Enter the value: ");
	scanf("%lf",&n);
	double r_off,trunc;
	r_off = n*100000;
	if((int)r_off % 10 >= 5 || (int)r_off % 10 <= -5) 
	{
		if(n>0)
		r_off = (int)(r_off/10)+1;
		else
		r_off = (int)(r_off/10)-1;
	}
	else r_off = (int)(r_off/10);
	r_off/=10000;
	trunc = (int)(n*10000);
	trunc/=10000;
	printf("Original Value = %lf\n",n);
	printf("Round-off Value = %.5lf\n",r_off);
	printf("Truncated Value = %.5lf\n",trunc);

	double ea, er, ep;
	ea = fabs(n - r_off);
	er = fabs(ea / n);
	ep = er * 100;
	printf("Absolute ERROR = %lf\n",ea);
	printf("Relative ERROR = %lf\n",er);
	printf("Percentage ERROR = %lf\n",ep);
    return 0;
}
