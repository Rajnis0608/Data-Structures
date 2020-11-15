#include<iostream>
using namespace std;
//merging two sorted array to form a new sorted array
// **NOTE:-Here size of array cannot exceed 20 by any mean

class array
{
public:
    int A[20];
    int size=20;
    int length;
    void create();
    void display();
    void merge(int arr1[20],int arr2[20],int m,int n);
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

void array::merge(int arr1[20],int arr2[20],int m,int n)
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
            A[k++]=arr1[i++];
        else
            A[k++]=arr2[j++];

    }
    for(;i<m;i++)
        A[k++]=arr1[i];
    for(;j<n;j++)
        A[k++]=arr2[j];
    length=m+n;
}
int main()
{
    array arr1,arr2,arr3;
    arr1.create();
    arr1.display();
    arr2.create();
    arr2.display();
    arr3.merge(arr1.A,arr2.A,arr1.length,arr2.length);
    cout<<"merged arrays is:";

    arr3.display();

}


