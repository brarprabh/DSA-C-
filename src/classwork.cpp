#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack
{
    int arr[n];
    int topindex = -1;

public:
    int top()
    {
        if (topindex == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[topindex];
    }
    void push(int val)
    {
        if (topindex == n - 1)
        {
            cout << "Stack overflow";
            return;
        }
        topindex++;
        arr[topindex] = val;
    }
    void pop()
    {
        if (topindex == -1)
        {
            cout << " Stack Underflow";
            return;
        }
        topindex--;
    }

    bool empty()
    {
        return topindex == -1;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}