#include<iostream>
using namespace std;

double taylor(double x,double n)
{
    //using looping
    double s=1;
    for(;n>0;n--)
    {
        s=1+s*x/n;
    }
    return s;
}

int main()
{
    double x,n;
    cout<<"Enter the value of x and n ";
    cin>>x>>n;
    cout<<"Answer of taylor series is "<<taylor(x,n);
}
