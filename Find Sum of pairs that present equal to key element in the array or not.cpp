#include <iostream>
using namespace std;
class A
{
    public:
    A(int arr[], int n, int k)
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==k)
                {
                    cout<<"\n\nElement found with sum of: "<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
                }
				else{
					break;
				}
            }
        }
    }
};
int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int k;
    cout<<"\n\nEnter the element you want to find the pairs of sum: "<<endl;
    cin>>k;
    A obj();
	A ob1(arr,n,k);
    return 0;
}
