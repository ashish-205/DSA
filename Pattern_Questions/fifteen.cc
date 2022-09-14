/*
      *
     ***
    *****
   *******
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
    for(int k=0;k<row-i-1;k++)
    {
        cout<<" ";
    }
    for(int j=0;j<2*i+1;j++)
    {
        cout<<"*";
    }
    cout<<endl;
 }

    
}
