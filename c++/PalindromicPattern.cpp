#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<"   ";
        int k;
        for( k=i;k>=1;k--)
            cout<<" "<<k<<" ";
        k=2;
        for(int j=1;j<=i-1;j++)
            cout<<" "<<k++<<" ";
        cout<<'\n';
    }
    return 0;
}