#include<iostream>
using namespace std;

int factorial1(int n)
{
    //using recursion
    if(n==0)
        return 1;
    else
        return factorial1(n-1)*n;
}


int factorial2(int n)
{
    int p=1;
    for(int i=1;i<=n;i++)
        p=p*i;
    return p;
}

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Using recursion "<<factorial1(n)<<endl;
    cout<<"Using loop "<<factorial2(n)<<endl;
}
