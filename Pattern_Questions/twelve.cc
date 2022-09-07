/*
E 
D E
C D E
B C D E
A B C D E
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
        for(int j=0;j<=i;j++)
        {
            int x=j+(row-i)-1;
            cout<<char(x+'A')<<" ";

        }
        cout<<endl;
        
    }
    
}
