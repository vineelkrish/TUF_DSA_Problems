#include<bits/stdc++.h>
using namespace std;
bool checkprime(int n){
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    n=79;
    cout<<checkprime(n);
}