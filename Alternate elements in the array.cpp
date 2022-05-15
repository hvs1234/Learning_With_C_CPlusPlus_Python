#include<iostream>
using namespace std;
int main()
{
    int n; cout<<"Enter the size of array:"; cin>>n;
    int a[n],i=0,j=0,s;
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    if(n&1) s = (n/2)+1;
    else s=n/2;
    int b[s];
    for(int i=0;i<n;i+=2) { b[j] = a[i]; j++; }
    for(int i=0;i<s;i++) { printf("%d ",b[i]); }
    return 0;
}
