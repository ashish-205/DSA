/*
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 
 *  *  *  *
 *  *  *
 *  *
 *
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin>>row;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=1;i<=row-1;i++)
    {
        for(int j=0;j<=row-i-1;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
