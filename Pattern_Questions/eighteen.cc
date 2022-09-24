/*
1                 1 
1 2             2 1 
1 2 3         3 2 1 
1 2 3 4     4 3 2 1 
1 2 3 4 5 5 4 3 2 1 
*/
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int row;
    cout<<"Enter number of rows :";
    cin>>row;
    
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<i+1;j++)
       {
           cout<<j+1<<" ";
       }
       for(int k=0;k<2*(row-i)-2;k++)
       {
           cout<<"  ";
       }
      for(int l=i;l>=0;l--)
      {
          cout<<l+1<<" ";
      }
       cout<<endl;
   }

    return 0;
}
