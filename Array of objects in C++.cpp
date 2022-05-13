#include <iostream>
using namespace std;
class A
{
	int a,b;
    public:
    void getdata()
	{
		cout<<"Enter the first number: "<<endl;
		cin>>a;
		cout<<"Enter the second number: "<<endl;
		cin>>b;
	}
	int sum()
	{
		return a+b;
	}
};
int main()
{
	int n;
	cout<<"Enter the size: "<<endl;
	cin>>n;
	A obj[n];
	for(int i=0;i<n;i++)
	{
        obj[i].getdata();
		cout<<obj[i].sum()<<endl;
	}
    return 0;
}
