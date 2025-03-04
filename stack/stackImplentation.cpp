//using array (static)
#include<iostream>
using namespace std;
#define MAX 5

class stack{
private:
    int arr[MAX];
    int top;

public:
    stack()
    {
        top=-1;
    }
    void push(int x)
    {
        if(top==MAX-1)
        {
            cout<<"Stack overflow"<<endl;
            return;
        }
        arr[++top]=x;
        cout<<"Pushed successfully"<<endl;
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack empty!"<<endl;
            return -1;
        }
        return arr[top--];
    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack underflow!"<<endl;
            return -1;
        }
        return arr[top];
    }
};
int main()
{
    stack s;
    s.push(123);
    s.push(44);
    s.push(1);
    cout<<"Top is "<<s.peek()<<endl;
    cout<<"Popped "<<s.pop()<<endl;
    cout<<"Top is "<<s.peek()<<endl;
    return 0;
}
