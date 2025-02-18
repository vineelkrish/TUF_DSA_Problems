#include<bits/stdc++.h>
using namespace std;
void pat(int n)
{
    for(int i=1;i<=n;i++)
    {  
       char c;
       if(i%2==0)
       c='0';
       else
       c='1';
       for(int j=1;j<=i;j++){ 
        cout<<c;
        if(c=='0')
        c='1';
        else
        c='0';
       }
        cout<<endl;
    }
}
int main(){
    int n;
    n=5;
    pat(n);
}