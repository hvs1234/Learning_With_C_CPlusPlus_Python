#include<iostream>
using namespace std;
int sum(float a, float b)
{
	int sum=a+b;
	return sum;
}
int sub(float a, float b)
{
	int sub = a-b;
	return sub;
}
int mul(float a, float b)
{
	int mul = a*b;
	return mul;
}
int divide(float a, float b)
{
	int div = (float)a/b;
	return div;
}
int main()
{
	int a,b; cout<<"Enter first number:"; cin>>a; cout<<endl;
	cout<<"Enter second number:"; cin>>b; cout<<endl;
	int ch,r; cout<<"Enter your choice:"; cin>>ch; cout<<endl;
	switch(ch){
		case 1: r = sum(a,b); break;
		case 2: r = sub(a,b); break;
		case 3: r = mul(a,b); break;
		case 4: r = divide(a,b); break;
		default: cout<<"Invalid choice!";
	}
	if(ch==1) cout<<a<<"+"<<b<<" "<<"="<<" "<<r; cout<<endl;
	if(ch==2) cout<<a<<"-"<<b<<" "<<"="<<" "<<r; cout<<endl;
	if(ch==3) cout<<a<<"x"<<b<<" "<<"="<<" "<<r; cout<<endl;
	if(ch==4) cout<<a<<"/"<<b<<" "<<"="<<" "<<r; cout<<endl;
	return 0;
	
}
