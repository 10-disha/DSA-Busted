#include <iostream>
#include <stack>
using namespace std;

// create your own class stack
class Stack
{

    // properties or data members
public:
    int *arr;
    int top;
    int size;

    // functions and behaviour section

    // this one is Stack constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }

        else
        {
            cout << "Stack overflow";
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }

        else
        {
            cout << "stack underflow" << endl;
        }
    }

    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }

        else
        {
            cout << "Stack is empty";
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(33);
    st.push(22);
    st.push(43);
    st.push(33);

    cout << st.peak() << endl;

    st.pop();

    cout << st.peak() << endl;

    if (st.isEmpty())
    {
        cout << "Stack empty h" << endl;
    }

    else
    {
        cout << "stack is not empty " << endl;
    }

    /*
        // creation of stack
        stack<int> s;

        // push operation
        s.push(2);
        s.push(3);

        // use pop operation
        s.pop();

        cout << " printing top element" << s.top() << endl;

        if (s.empty())
        {
            cout << "stack is empty" << endl;
        }

        else
        {
            cout << "stack is not empty" << endl;
        }

        cout << "size of stack is:" << s.size() << endl;

        return 0;

        */
}