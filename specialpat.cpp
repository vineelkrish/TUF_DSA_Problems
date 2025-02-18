#include<bits/stdc++.h>
using namespace std;
void alphaHill(int n) {
    // Write your code here.
     for(int i=0;i<n;i++)
        {
            //spaces
            for(int j=0;j<=n-i;j++)
            {
                cout<<" ";
            }
            //letters
            for(char ch='A';ch<='A'+i;ch++)
            cout<<ch<<" ";
            for(int j=0;j<=n-i;j++)
            {
                cout<<" ";
            }
            cout<<endl;
        }
}
int main(){
    int n;
    n=5;
    alphaHill(n);
}