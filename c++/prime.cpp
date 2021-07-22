#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    bool flag;
    cin>>n;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"Not a prime nummber"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"The given number is prime number";
    return 0;  
}