
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
    void reversing();
    void Reversing();
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

void array::reversing()
{
    int AA[20];
    int i=length-1,j=0;
    for(;i>=0;i--)
        AA[j]=A[i];
    for(int i=0;i<length;i++)
        A[i]=AA[i];
}

void array::Reversing()
{
   int i=0,j=length-1;
   for(;i<j;i++,j--)
   {
       int temp=A[i];
       A[i]=A[j];
       A[j]=temp;
   }
}

int main()
{
    array arr;
    arr.create();
    arr.display();
    arr.reversing();
    arr.display();
    arr.Reversing();
    arr.display();
}


