#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{   
    int r_num=0;
    while(n)
    {
       r_num=r_num*10+n%10;
       n=n/10;
    }
    return r_num;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
}