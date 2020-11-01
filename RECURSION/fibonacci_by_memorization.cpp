#include<iostream>
using namespace std;
int F[50];

int fib(int n)
{
    // recursion and memorization
    if(n<=1)
    {
       F[n]=n;
       return F[n];
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2]=fib(n-2);
        if(F[n-1]==-1)
            F[n-1]==fib(n-1);
        F[n]=F[n-2]+F[n-1];
        return F[n];
    }
}

int main()
{
    for(int i=0;i<50;i++)
    {
        F[i]=-1;
    }
    int n;
    cout<<"Enter the number of term of fibonacci series ";
    cin>>n;
    cout<<"using recursion and memorization "<<fib(n)<<endl;
}
