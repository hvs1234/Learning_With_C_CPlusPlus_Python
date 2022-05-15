#include<iostream>
using namespace std;
int main()
{
    int n; cout<<"Enter the size of array:"; cin>>n;
    int a[n]; int i=0,j=0,c,d=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
           if(i!=j){
           if(a[i]==a[j]) c++; }
        }
        if(c==0) d++;
        if(d==2) { cout<<"\nSecond non repeating element is:"<<a[i]; }
    } 
    return 0;
}
