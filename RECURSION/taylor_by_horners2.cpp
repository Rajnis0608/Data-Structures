#include<iostream>
using namespace std;

double e(double x,double n)
{
    //using recursion
    static double s=1;
    if(n==0)
        return s;

        s=1+(x/n)*s;
        return e(x,n-1);

}


int main()
{
    double x,n;
    cout<<"Enter the value of x and n ";
    cin>>x>>n;
    cout<<"Answer of taylor series is "<<e(x,n);
}
