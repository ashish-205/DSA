/*
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin>>row;
    int x=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            x=x+1;
            cout<<x<<" ";
        }
        
        cout<<endl;
    }
}
