#include<bits/stdc++.h>
using namespace std;
void pat(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch <= 'A'+i;ch++)
    {
        cout<<ch;
    }
    cout<<endl;
    }
}
int main(){
    int n;
    n=5;
    pat(n);

}