#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter the number:"); scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			c=1; break;
		}
	}
	if(n==1) printf("\nNeither prime nor composite!");
	else{
		if(c==0) printf("\n%d is prime number.",n);
		else printf("\n%d is not a prime number.",n);
	}
	return 0;
}
