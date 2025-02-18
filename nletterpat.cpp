#include<bits/stdc++.h>
using namespace std;
void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=n-1;i>=0;i--)
    {
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    n=5;
    nLetterTriangle(n);
}