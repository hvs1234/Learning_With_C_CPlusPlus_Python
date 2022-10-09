#include<stdio.h>
#include<math.h>
int n;
void converttodiagonal(float a[][n+1],int n)
{
	int i,j,k,x,y;
	float ratio;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j!=i)
			{
				ratio = a[j][i]/a[i][i];
				for(k=0;k<n+1;k++)
				{
					a[j][k]-=(ratio*a[i][k]);
				}
				printf("\nIntermediate forms: ");
				for(x=0;x<n;x++)
				{
					for(y=0;y<n+1;y++)
					{
						printf("%f",a[x][y]);
					}
					printf("\n");
				}
				printf("\n");
			}
		}
	}
}

void printunkowns(float a[][n+1], int n)
{
	int i;
	printf("\nValue of unkowns are: ");
	for(i=0;i<n;i++)
	{
		printf("\nValue of variable %d is: %f",i,a[i][n]/a[i][i]);
	}
}

int main()
{
	float a[n][n+1];
	printf("Enter value of unknown: "); scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	converttodiagonal(a,n);
	printunkowns(a,n);
	return 0;
}
