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
    void insert(int n,int x);
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

void array::insert(int n,int x)
{
    if(n>0 && n<length)
    {
       for(int i=length;i>n;i--)
            A[i]=A[i-1];
    }
    A[n]=x;
    length++;
}

int main()
{
    array arr;
    arr.create();
    arr.display();
    int n,x;
    cout<<"Enter index and element you wants to insert : ";
    cin>>n>>x;
    arr.insert(n,x);
    arr.display();
}



