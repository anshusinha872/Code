#include<iostream>
using namespace std;
bool ispowerof2(int n){
    return (n&&!(n&n-1));
}
int main()
{
    int n;
    cin>>n;
    if(ispowerof2(n))
        cout<<"the given number is power of 2"<<endl;
    else
        cout<<"the given number is not power of 2"<<endl;
    return 0;
}