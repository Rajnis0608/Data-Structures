#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 7;
    int *p = &a;
    cout<<p;

}

/*using namespace std;

class Queue {
    //max size of Queue can be 20
    stack<int> s1;
public:
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
};

bool Queue :: isEmpty() {
    return (s1.empty());
}

void Queue :: enqueue(int x){
    cout<<x<<" added to queue."<<endl;
    s1.push(x);
}

int Queue :: dequeue() {
    if(s1.empty()){
        cout<<"Queue is empty."<<endl;
        exit(0);
    }

    int x = s1.top();
    s1.pop();
    if(s1.empty()){
        cout<<x<<" is removed from queue."<<endl;
        return x;
    }
    int res = dequeue();
    s1.push(res);
    return res;
}

int main(){
    Queue q1;
    cout<<q1.isEmpty()<<endl;
    q1.enqueue(45);
    q1.enqueue(56);
    q1.enqueue(68);
    q1.dequeue();
}
*/
