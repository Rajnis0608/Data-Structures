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
    void deletea(int n);
    ~array()
    {
        delete []A;
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

void array::deletea(int n)
{
    int *AA=new int[size-1];
    for(int i=0;i<n;i++)
        AA[i]=A[i];
    for(int j=n;j<length-1;j++)
        AA[j]=A[j+1];
    delete []A;
    A=AA;
    AA=NULL;
    length--;
    size--;
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
