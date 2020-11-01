#include<iostream>
using namespace std;
int fun1(int n)
{
    //function using static variable
    static int x=0;
    if(n>0)
    {
        x++;
        return fun1(n-1)+x;
    }
    return 0;
}

int fun2(int n)
{
    //function using global variable
    if(n>0)
    {
        return fun2(n-1)+n;
    }
    return 0;
}

int main()
{
    int i=5;
    cout<<fun1(i)<<endl;
    cout<<fun2(i)<<endl;

}
