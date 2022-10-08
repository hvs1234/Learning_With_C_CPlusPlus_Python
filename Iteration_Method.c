#include<stdio.h>
#include<math.h>
float iteration(float x);

int main()
{
	float a[100],b[100],c=100.0;
	scanf("%f",&a[0]);
	int j=0;
	while(c>0.00001)
	{
		a[j+1] = iteration(a[j]);
		c = a[j+1]-a[j];
		c = fabs(c);
		printf("\n%d %f\t",j,a[j]);
		j++;
	}
	printf("\n%f",a[j]);
	return 0;
}

float iteration(float x)
{
	float y;
	y = (cos(x)+2)/3;
	return y;
}
