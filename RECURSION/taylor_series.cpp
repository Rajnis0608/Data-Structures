#include<iostream>
using namespace std;

double e(int x,int n)
{
    static double p=1,f=1;
    double ans;
    if(n==0)
        return 1;
    else
    {
        ans=e(x,n-1);
        p=p*x;
        f=f*n;
        return ans+p/f;
    }
}

int main()
{
    int x,n;
    cout<<"Enter the values of x and n ";
    cin>>x>>n;
    cout<<"Answer of taylor series is "<<e(x,n);
}
