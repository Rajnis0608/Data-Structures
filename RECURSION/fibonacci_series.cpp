#include<iostream>
using namespace std;

int fib(int n)
{
    //using recursion
    if(n<=1)
        return n;
    else
        return fib(n-2)+fib(n-1);
}

int ifib(int n)
{
    //using iteration method
    if(n<=1)
        return n;
    int t,t0=0,t1=1;
    for(int i=2;i<=n;i++)
    {
        t=t0+t1;
        t0=t1;
        t1=t;
    }
    return t;
}

int main()
{
    int n;
    cout<<"Enter the number of term of fibonacci series ";
    cin>>n;
    cout<<"using recursion "<<fib(n)<<endl;
    cout<<"using iterations "<<ifib(n);
}
