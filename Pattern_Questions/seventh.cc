/*
A 
B B
C C C
D D D D
E E E E E
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
            cout<<char(x+i)<<" ";
        }
        
        cout<<endl;
    }
}
