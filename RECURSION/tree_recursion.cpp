#include<iostream>
using namespace std;
//when function call itself more than one time then its called
//tree recursion
void fun(int n)
{
    if(n>0)
    {
    cout<<n;
    fun(n-1);
    fun(n-1);
    }
}

int main()
{
    int x=3;
    fun(3);
    return 0;
}
