
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
    int get(int n);
    void set(int n,int x);
    int max();
    int min();
    int sum();
    int average();
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

int array::get(int n)
{
    if(n>=0 && n<length)
        return A[n];
}

void array::set(int n,int x)
{
    if(n>=0 && n<length)
        A[n]=x;
}

int array::max()
{
    int max=A[0];
    for(int i=0;i<length;i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    return max;
}

int array::min()
{
     int min=A[0];
    for(int i=0;i<length;i++)
    {
        if(A[i]<min)
            min=A[i];
    }
    return min;
}

int array::sum()
{
    int sum=0;
    for(int i=0;i<length;i++)
        sum=sum+A[i];
    return sum;
}

int array::average()
{
    int s=sum();
    return s/length;
}

int main()
{
    array arr;
    arr.create();
    arr.display();
    int n;
    cout<<"Enter the index at which you wants to know the value:";
    cin>>n;
    cout<<arr.get(n)<<endl;
    int i,j;
    cout<<"Enter index and value at that index you wants to change:";
    cin>>i>>j;
    arr.set(i,j);
    arr.display();
    cout<<"Maximum value in array is:"<<arr.max()<<endl;
    cout<<"Minimum value in array is:"<<arr.min()<<endl;
    cout<<"Sum of elements of array is:"<<arr.sum()<<endl;
    cout<<"Average of elements of array is:"<<arr.average()<<endl;
}


