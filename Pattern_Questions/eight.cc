/*
A 
A B 
A B C 
A B C D 
A B C D E 
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin>>row;
    int x=65;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<char(x+j)<<" ";
        }
        
        cout<<endl;
    }
}
