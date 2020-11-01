#include<iostream>
using namespace std;

int sum1(int n)
{
    //using recursion
    if(n==0)
        return 0;
    else
        return n+sum1(n-1);
}

int sum2(int n)
{
    //using direct formula
    return n*(n+1)/2;
}

int sum3(int n)
{
    //using loop
    int s=0;
    for(int i=0;i<=n;i++)
        s=s+i;
    return s;
}

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Using recursion "<<sum1(n)<<endl;
    cout<<"Using direct formula "<<sum2(n)<<endl;
    cout<<"Using loop "<<sum3(n)<<endl;
}
