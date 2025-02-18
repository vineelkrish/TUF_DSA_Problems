#include<bits/stdc++.h>
using namespace std;
vector<int> divisors(int n)
{   
    vector<int> divisors;
    int sqrtN=sqrt(n);
   for(int i=1;i<=sqrtN;i++)
   {
    if(n%i==0){ 
    divisors.push_back(i);
    if(i!=n/i)
    divisors.push_back(n/i);
   }
}
   return divisors;
}
int main(){
    int n;
    n=20;
    vector<int> ans=divisors(n);
    for(auto i: ans)
    cout<<i<<" ";
}