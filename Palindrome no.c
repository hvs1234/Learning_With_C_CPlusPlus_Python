#include<stdio.h>
void f(int n)
{
    int a[n],i=0,r,rem,temp,p;
    for(int i=0;i<n;i++) { scanf("%d",&a[i]); }
    for(int i=0;i<n;i++) { p=a[i]; r=0; while(p>0) { rem=p%10; r=r*10+rem; p/=10;}
                           if(r==a[i]) { printf("\n %d Palindrome Number.",a[i]); } }
                           
}
int main()
{
    int num; printf("Enter the number:"); scanf("%d",&num);
    f(num);
    return 0;
}
