#include<iostream>
using namespace std;

void TOH(int n,int a,int b,int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        cout<<"From "<<a<<" to "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}

int main()
{
    int n;
    cout<<"Enter the value of number of disks to be moved from 1 to 3 using 2: ";
    cin>>n;
    cout<<"Steps to be followed are :-"<<endl;
    TOH(n,1,2,3);
}
