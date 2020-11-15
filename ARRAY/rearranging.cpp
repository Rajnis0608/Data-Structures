#include<iostream>
using namespace std;
//negative elements on left side and positive on right side
// **NOTE:-Here size of array cannot exceed 20 by any mean
class array
{
public:
    int A[20];
    int size=20;
    int length;
    void create();
    void display();
    void rearrange();
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

void array::rearrange()
{
    int i=0;
    int j=length-1;
    while(i<j)
    {
        while(A[i]<0)
            i++;
        while(A[j]>=0)
            j--;
        if(i<j)
            swap(A[i],A[j]);
    }
}

int main()
{
    array arr;
    arr.create();
    arr.display();
    arr.rearrange();
    arr.display();
}


