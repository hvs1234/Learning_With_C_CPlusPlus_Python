#include <iostream>
using namespace std;
class find 
{
    public:
    find(int arr[], int n, int k)
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==k)
                {
                    cout<<"Element found with sum of: "<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
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
        cout<<arr[i];
    }
    int k;
    cout<<"Enter the element you want to find the pairs of sum: "<<endl;
    cin>>k;
    find obj(arr,n,k);
    return 0;
}
