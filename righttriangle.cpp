#include<bits/stdc++.h>
using namespace std;
void pat(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    n=5;
    pat(n);

}