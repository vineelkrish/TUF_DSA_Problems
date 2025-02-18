#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{   
    for(int i=0;i<n;i++)
    { 
      //space
      for(int j=0;j<n-i;j++)
      {
        cout<<" ";
      }
      //star
      for(int k=0;k<2*i+1;k++)
      {
        cout<<"*";
      }
      //space
      for(int j=0;j<n-i;j++)
      {
        cout<<" ";
      }
      cout<<endl;
    }
    
}
int main()
{
        int n;
        cin>>n;
        pattern(n);
    return 0;
}