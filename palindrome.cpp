#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n)
{
    int d=n;
    int rev_num=0;
    while(d!=0)
    {
        rev_num=rev_num*10+d%10;
        d=d/10;
    }
     if(n==rev_num) return true;
     return false;
}
int main(){
    int n;
    cin>>n;
    cout<<palindrome(n);
}