#include<iostream>
using namespace std;
int knapSap(int weight[],int value[],int W,int N)
{
    if(N==0 || W==0)
        return 0;
    if(weight[N]>W)
        knapSap(weight,value,W,N-1);
    if(weight[N]<=W)
        return max(knapSap(weight,value,W-weight[N],N-1) + value[N],knapSap(weight,value,W,N-1));
}
int main()
{
    int n,w;
    cin>>n>>w;
    int weight[n+1],value[n+1];
    for(int i=1;i<n+1;i++)
        cin>>weight[i];
    for(int i=1;i<n+1;i++)
        cin>>value[i];
    cout<<knapSap(weight,value,w,n);
    return 0;
}