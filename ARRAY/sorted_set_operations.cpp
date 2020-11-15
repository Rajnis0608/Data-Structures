//set operations
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
    void sunion(int arr1[20],int arr2[20],int m,int n);
    void intersection(int arr1[20],int arr2[20],int m,int n);
    void difference(int arr1[20],int arr2[20],int m,int n);
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

void array::sunion(int arr1[20],int arr2[20],int m,int n)
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
            A[k++]=arr1[i++];
        else if(arr2[j]<arr1[i])
            A[k++]=arr2[j++];
        else
        {
            A[k++]=arr1[i++];
            j++;
        }
    }
    for(;i<m;i++)
        A[k++]=arr1[i];
    for(;j<n;j++)
        A[k++]=arr2[j];
    length=k;
}

void array::intersection(int arr1[20],int arr2[20],int m,int n)
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr1[i])
           j++;
        else
        {
            A[k++]=arr1[i++];
            j++;
        }
    }
    length=k;
}


void array::difference(int arr1[20],int arr2[20],int m,int n)
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
            A[k++]=arr1[i++];
        else if(arr2[j]<arr1[i])
            j++;
        else
        {
           i++;
           j++;
        }
    }
    for(;i<m;i++)
        A[k++]=arr1[i];
    length=k;
}


int main()
{
    array arr1,arr2,arr3,arr4,arr5;
    arr1.create();
    arr1.display();
    arr2.create();
    arr2.display();
    arr3.sunion(arr1.A,arr2.A,arr1.length,arr2.length);
    cout<<"Union of arrays is:";
    arr3.display();
    arr4.intersection(arr1.A,arr2.A,arr1.length,arr2.length);
    cout<<"Intersection of arrays is:";
    arr4.display();
    arr5.difference(arr1.A,arr2.A,arr1.length,arr2.length);
    cout<<"Difference of arrays is:";
    arr5.display();
}


