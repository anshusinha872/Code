#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of rows and column"<<'\n';
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<"*";
        cout<<'\n';
    }   
    return 0;
}