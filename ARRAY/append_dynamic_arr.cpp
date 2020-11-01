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
    void append(int x);
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

void array::append(int x)
{
    int *AA=new int[size+1];
    for(int i=0;i<length;i++)
        AA[i]=A[i];
    delete []A;
    A=AA;
    AA=NULL;
    A[length]=x;
    size++;
    length++;
}

int main()
{
    array arr;
    arr.create();
    arr.display();
    int m;
    cout<<"Enter element you wants to add : ";
    cin>>m;
    arr.append(m);
    arr.display();

}
