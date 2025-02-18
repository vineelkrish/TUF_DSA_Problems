#include<bits/stdc++.h>
using namespace std;
int countDigits(int n)
{
    int count=int(log10(n))+1;
    return count;
}
int main(){
    int n;
    n=123;
    cout<<countDigits(n);
}