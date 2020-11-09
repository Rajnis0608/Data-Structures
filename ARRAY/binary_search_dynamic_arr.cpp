#include<iostream>
using namespace std;
/*****KEEP IN MIND ARRAY SHOULD BE SORTED****/
class array
{
public:
    int *A;
    int size;
    int length;
    void create();
    void display();
    int search(int key);
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

int array::search(int key)
{
    //binary search
    int l,mid,h;
    l=0;
    h=length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
            return mid;
        else if(key>A[mid])
            l=mid+1;
        else if(key<mid)
            h=mid-1;
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
    if(arr.search(key)!=-1)
        cout<<"Element found at index number "<<arr.search(key)<<endl;
    else
        cout<<"Element not found"<<endl;
}
