#include<iostream>
using namespace std;
class array
{
public:
    int *A;
    int size;
    int length;
    void create();
    void display();
    ~array()
    {
        delete A;
    }
};

void array::create()
{
    cout<<"Enter size of array : ";
    cin>>size;
    A=new int[size];
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

int main()
{
    array arr;
    arr.create();
    arr.display();
}
