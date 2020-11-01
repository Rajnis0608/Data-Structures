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
    void insert(int,int);
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

void array::insert(int n,int x)
{
    int *AA=new int[size+1];
    for(int i=0;i<length;i++)
        AA[i]=A[i];
    delete []A;
    A=AA;
    AA=NULL;
    for(int j=length;j>n;j--)
        A[j]=A[j-1];
    A[n]=x;
    length++;
    size++;
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
