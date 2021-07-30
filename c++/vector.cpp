#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // int arr[]={11,12,13};
    vector<int> v;
    // v.assign(arr,arr+2);
    v.assign({1,2,3,4,5});
    v.assign(v.begin(),v.begin()+2);
    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}