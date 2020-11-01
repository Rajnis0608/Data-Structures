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
    void append(int x);
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

void array::append(int x)
{
    if(length<size)
        A[length]=x;
        length++;
}

int main()
{
    array arr;
    arr.create();
    arr.display();
    int x;
    cout<<"Enter the element you wants to add : ";
    cin>>x;
    arr.append(x);
    arr.display();
}

