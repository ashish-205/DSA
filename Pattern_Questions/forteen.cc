/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout<<"Enter rows :";
    cin>>row;

    
 for(int i=0;i<row;i++)
 {
    for(int j=0;j<i+1;j++)
    {
        if((i+j)%2==0)
        {
            cout<<1<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
    cout<<endl;
 }

    
}
