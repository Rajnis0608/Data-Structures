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
    void left_shift();
    void left_rotation();
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

void array::left_shift()
{
    for(int i=0;i<length-1;i++)
        A[i]=A[i+1];
    A[length-1]=0;
}

void array::left_rotation()
{
    int temp=A[0];
    for(int i=0;i<length-1;i++)
        A[i]=A[i+1];
    A[length-1]=temp;
}
int main()
{
    array arr;
    arr.create();
    arr.display();
    arr.left_rotation();
    arr.display();
    arr.left_shift();
    arr.display();
}


