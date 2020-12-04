#include<iostream>
using namespace std;
//lower triangular is not working well
class matrix
{
protected:
    int n;
    int *A;
public:
    matrix(){}
    matrix(int n,int x)
    {
        this->n=n;
        A=new int[x];
    }
    ~matrix()
    {
        delete []A;
    }
};

class diagonal: public matrix
{
public:
    diagonal(){}
    diagonal(int n):matrix(n,n){}
    int get(int i,int j)
    {
        if(i==j)
            return A[i-1];
        else
            return 0;
    }
    void set(int i,int j,int x)
    {
        if(i==j)
            A[i-1]=x;
    }
    void display();
    void create();
};

class lower_triangular:public matrix{
public:
    lower_triangular(){}
    lower_triangular(int n):matrix(n,n*(n+1)/2){}
    int get(int i,int j)
    {
        if(i>=j)
            return A[(i*(i-1)/2)+j];
        else
            return 0;
    }
    void set(int i,int j,int x)
    {
        if(i>=j)
            A[(i*(i-1)/2)+j]=x;
    }
    void display();
    void create();
};

void diagonal::display()
{
    cout<<"Martix is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                cout<<A[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

void::diagonal::create()
{
    int x;
    cout<<"Enter the diagonal elements of matrix:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             if(i==j)
             {
                 cin>>x;
                 A[i]=x;
             }
        }
    }
}

void lower_triangular::display()
{

    cout<<"Martix is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
                cout<<A[(i*(i-1)/2)+j]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

void lower_triangular::create()
{
    int x;
    cout<<"Enter the elements of matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
                 cin>>x;
                 if(i>=j)
                    A[(i*(i-1)/2)+j]=x;
        }
    }
}

void D()
{
    int n;
    cout<<"Enter the order of matrix:";
    cin>>n;
    diagonal dig(n);
    dig.create();
    dig.display();
    dig.set(1,1,10);
    dig.display();
    cout<<"A11="<<dig.get(1,1);
}

void LT()
{
    int n;
    cout<<"Enter the order of matrix:";
    cin>>n;
    lower_triangular l_tri(n);
    l_tri.create();
    l_tri.display();
    l_tri.set(1,1,10);
    l_tri.display();
    cout<<"A11="<<l_tri.get(1,1);
}

int main()
{
    //D();
    LT();
}






