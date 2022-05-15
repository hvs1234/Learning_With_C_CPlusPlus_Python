#include<stdio.h>
int main()
{
	int n; printf("Enter the size of array:"); scanf("%d",&n);
	int i=0,j=0,a[n],c=0; 
	n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDuplicate elements is:");
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			    c++;
				printf("%d ",a[j]);
				break;
			}
		}
		
	} 
	printf("\nTotal duplicate elements is: %d",c);
}
