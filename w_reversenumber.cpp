#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int digits[10];
    int i=0;
    int d=n;
    while(d)
    {
        digits[i]=d%10;
        d=d/10;
        i++;
    }
    int rev_num=0,place=1;
    for(int j=i-1;j>=0;j--)
    {
        rev_num+=digits[j]*place;
        place*=10;
    }
    return rev_num;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
}