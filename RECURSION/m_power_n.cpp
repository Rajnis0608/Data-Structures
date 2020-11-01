#include<iostream>
using namespace std;

int power1(int m,int n)
{
    if(n==0)
        return 1;
    else
        return m*power1(m,n-1);
}

int power(int m,int n)
{
    //reducing time complexity
    if(n==0)
        return 1;
    if(n%2==0)
        return power(m*m,n/2);
    else
        return m*power(m*m,(n-1)/2);
}

int power2(int m,int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
        ans=ans*m;
    return ans;
}

int main()
{
     int n,m;
    cout<<"Enter the value of m and n : ";
    cin>>m>>n;
    cout<<"By normal recursion "<<power1(m,n)<<endl;
    cout<<"By reduced time complexity "<<power(m,n)<<endl;
    cout<<"By looping "<<power2(m,n)<<endl;
}

