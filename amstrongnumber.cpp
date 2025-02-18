#include<bits/stdc++.h>
using namespace std;
bool amstrong(int n)
{
    int s=to_string(n).length();
    int nn=n;
    int an=0;
    for(int i=n;i>0;i=i/10)
    {
        an+=pow(i%10,s);
    }
    if(an==nn) return true;
    return false;
}
int main(){
    int n;
    n=1634;
    cout<<amstrong(n);
}