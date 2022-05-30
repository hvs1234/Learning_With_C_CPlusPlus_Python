#include <iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    int adjmat[8][7] = {
        {0,1,0,0,0,1,0},
        {0,0,1,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,0,0,0,1},
        {0,1,0,1,0,0,1},
        {0,0,0,0,1,0,1},
        {0,1,0,0,0,0,0},
        {0,0,0,0,0,0,0}
    };
    int src,dest;
    cout<<"Enter source node: "; 
    cin>>src;
    cout<<"Enter destination node: ";
    cin>>dest;
    stack<int>st; vector<int>tlist;
    st.push(src);
    while(!st.empty())
    {
        int temp = st.top();
        if(adjmat[7][temp]==0){
            tlist.push_back(temp);
        }
        adjmat[7][temp]=1;
        st.pop();
        for(int i=0;i<7;i++)
        {
            if(adjmat[temp][i]==1 && adjmat[7][i]==0)
            {
                st.push(i);
            }
        }
    }
    for(int j=0;j<tlist.size();j++)
    {
        cout<<tlist[j]<<", ";
    }
    if(adjmat[7][dest]==1){
        cout<<"Path exist";
    }
    else{
        cout<<"No path";
    }
    return 0;
}
