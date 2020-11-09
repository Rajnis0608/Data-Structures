#include<iostream>
using namespace std;

// **NOTE:-Here size of array cannot exceed 20 by any mean
class array
{
public:
    int A[20];
    int size=20;
    int length;
    void create();
    void display();
    void right_shift();
    void right_rotation();
};

void array::create()
{
    cout<<"Enter number of elements : ";
    cin>>length;
    cout<<"Enter all the elements : ";
    for(int i=0;i<length;i++)
        cin>>A[i];
}

void array::display()
{
    cout<<"Elements of an array are : ";
    for(int i=0;i<length;i++)
        cout<<A[i]<<"\t";
    cout<<endl;
}

void array::right_shift()
{
    for(int i=length-1;i>0;i--)
        A[i]=A[i-1];
    A[0]=0;
}

void array::right_rotation()
{
    int temp=A[length-1];
    for(int i=length-1;i>0;i--)
        A[i]=A[i-1];
    A[0]=temp;
}
int main()
{
    array arr;
    arr.create();
    arr.display();
    arr.right_rotation();
    arr.display();
    arr.right_shift();
    arr.display();
}


