#include <stdio.h>
#include<math.h>
#define MAXITEMS 10

int main()
{
	int i,j;
	int n;		
	double table[MAXITEMS][MAXITEMS+1];
	double h;
	double x, y = 0.0;	
	double u, m = 1.0; 	
	int z;			
	
	printf(" Enter no of terms : ");
	scanf("%d", &n);
	printf(" Enter first term : ");
	scanf("%lg", &table[0][0]);
	printf(" Enter difference between terms : ");
	scanf("%lg", &h);
	
	for( i=0; i<n; i++)
	{
		table[i][0] = table[0][0] + (double)(i) * h;
		printf(" Enter the value of f(%lg) : ", table[i][0]);
		scanf("%lg", &table[i][1]);
	}
	
	for( j=1; j<n; j++)	
		for( i=0; i<n-j; i++)	
			table[i][j+1] = table[i+1][j] - table[i][j];
	
	printf("\n Enter the value of x for which you want to find f(x) : ");
	scanf("%lg", &x);
	for( i=0; i<n; i++)
	{
		u = ( x - table[i][0] ) / h;
		if( 0<u && u<=0.5 )
			break;
	}
	if( i == n ) 
	{
		printf("\n Condition 0<u<=0.5 not satisfied");
		return 1;
	}
	else
		z = i;
	
	printf("\n u = %g is found at f(%g)", u, table[z][0]);
	
	for( j=1, i=0; j<=n; j++)
	{
		y += m * table[z-i][j];
		
		if( j%2 == 1 )
			m *= (u+(i) / (j));
		else
			m *= (u-(++i)) / (double)(j);
		
		if( (z-i)<0 || (z-i)>(n-j-1) )
			break;
	}
	printf("\n F(%g) = %g", x, y);	
    return 0;
}
