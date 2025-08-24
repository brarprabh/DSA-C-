// Stack basic

// #include <bits/stdc++.h>
// using namespace std;
// #define n 100
// class Stack
// {
//     int arr[n];
//     int topindex = -1; // in vector we dont require this..

// public:
//     int top()
//     {
//         if (topindex == -1)
//         {
//             cout << "Stack is empty" << endl;
//             return -1;
//         }
//         return arr[topindex];
//     }
//     void push(int val)
//     {
//         if (topindex == n - 1)
//         {
//             cout << "Stack overflow";
//             return;
//         }
//         topindex++;
//         arr[topindex] = val;
//     }
//     void pop()
//     {
//         if (topindex == -1)
//         {
//             cout << " Stack Underflow";
//             return;
//         }
//         topindex--;
//     }

//     bool empty()
//     {
//         return topindex == -1;
//     }
// };

// int main()
// {
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
// }

// Valid parathesis

#include <bits/stdc++.h>
using namespace std;

bool validparathesis(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else
        {
            if (st.empty())
                return false;
            if ((str[i] == ')' && st.top() == '(') ||
                (str[i] == ']' && st.top() == '[') ||
                (str[i] == '}' && st.top() == '{'))
            {
                st.pop();
            }
            else
                return false;
        }
    }
    return st.empty();
}

int main()
{
    string str;
    getline(cin, str);
    bool valid = validparathesis(str);
    cout << (valid ? "Valid" : "Invalid") << endl;
    return 0;
}