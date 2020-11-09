#include<iostream>
using namespace std;
/*****KEEP IN MIND ARRAY SHOULD BE SORTED****/
// **NOTE:-Here size of array cannot exceed 20 by any mean
class array
{
public:
    int A[20];
    int size=20;
    int length;
    void create();
    void display();
    int search(int,int,int);
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

int array::search(int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
            return mid;
        else if(key>A[mid])
            return search(mid+1,h,key);
        else if(key<A[mid])
            return search(l,mid-1,key);
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
    if(arr.search(0,arr.length-1,key)!=-1)
        cout<<"Element found at index number "<<arr.search(0,arr.length-1,key)<<endl;
    else
        cout<<"Element not found"<<endl;
}



