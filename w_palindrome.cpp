#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n)
{
    string str=to_string(n);
    string rev_str=str;
    reverse(rev_str.begin(),rev_str.end());
    if(str==rev_str)
    return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    cout<<palindrome(n);
}