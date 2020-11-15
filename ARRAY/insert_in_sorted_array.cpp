#include<iostream>
using namespace std;
//inserting in sorted array
//to check if array is sorted or not
// **NOTE:-Here size of array cannot exceed 20 by any mean
class array
{
public:
    int A[20];
    int size=20;
    int length;
    void create();
    void display();
    int insert(int x);
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

int array::insert(int x)
{
    for(int j=0;j<length-1;j++)
    {
        if(A[j]>A[j+1])
        {
            cout<<"Array is not sorted"<<endl;
            return 0;
        }
    }

    int i=length-1;
    while(A[i]>x)
    {
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=x;
    length++;
    display();
}

int main()
{
    array arr;
    //input a sorted array only;
    arr.create();
    arr.display();
    int x;
    cout<<"Enter element you wants to insert:";
    cin>>x;
    arr.insert(x);

}


