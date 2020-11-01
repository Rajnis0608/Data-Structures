
#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}

int comb(int n,int r)
{
    //using function of factorial
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    int num=t1;
    int denom=t2*t3;
    return num/denom;
}

int rcomb(int n,int r)
{
    if(r==0||r==n)
        return 1;
    else
        return (rcomb(n-1,r)+rcomb(n-1,r-1));
}

int main()
{
    int n,r;
    cout<<"Enter the values of n and r for combination ";
    cin>>n>>r;
    cout<<"value of nCr using function of factorial is "<<comb(n,r)<<endl;
    cout<<"value of nCr using recursion "<<rcomb(n,r)<<endl;
}
