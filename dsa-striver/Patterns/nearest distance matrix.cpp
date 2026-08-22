#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int size=2*n-1;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            int k=min(min(i,j),min((size-1-i),(size-1-j)));
            cout<<n-k;
        }
        cout<<endl;


    }

}