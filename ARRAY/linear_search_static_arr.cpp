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
    int linear_search(int key);
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

int array::linear_search(int key)
{
    for(int i=0;i<length;i++)
    {
        if(A[i]==key)
            return i;
    }
    return -1;
}

int main()
{
    array arr;
    arr.create();
    arr.display();
    int key;
    cout<<"Enter the element you wants to search ";
    cin>>key;
    if(arr.linear_search(key)!=-1)
        cout<<"Element found at index number "<<arr.linear_search(key)<<endl;
    else
        cout<<"Element not found"<<endl;
}


