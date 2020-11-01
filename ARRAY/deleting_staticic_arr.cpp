
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
    void deletea(int n);
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

void array::deletea(int n)
{
    if(n>0 && n<length)
    {
        for(int i=n;i<length-1;i++)
            A[i]=A[i+1];
        length--;
    }
}

int main()
{
    array arr;
    arr.create();
    arr.display();
    int n;
    cout<<"Enter the index from where you wants to delete an element : ";
    cin>>n;
    arr.deletea(n);
    arr.display();
}


