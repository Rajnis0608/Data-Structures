
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
    void reversing();
    void Reversing();
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

void array::reversing()
{
    //method1
    int *AA=new int[size];
    int i=length-1;int j=0;
    for(;i>=0;i--,j++)
        AA[j]=A[i];
    delete []A;
    A=AA;
    AA=NULL;
}

void array::Reversing()
{
    int i=0,j=length-1;
    for(;i<j;j--,i++)
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
