// Create stack1 of int type, and create another stack of the same type with name
// stack2 and copy all the elements of stack1 into stack2 in the same order.

#include <iostream>
#include <stack>
using namespace std;
void copy(stack<int> temp, stack<int> &stack2)
{
    stack<int> temp1;
    while (!temp.empty())
    {
        temp1.push(temp.top());
        temp.pop();
    }

    while (!temp1.empty())
    {
        stack2.push(temp1.top());
        temp1.pop();
    }
}

int main()
{
    stack<int> stack1, stack2;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);
    copy(stack1, stack2);
    cout << "Stack2" << endl;
    while (!stack2.empty())
    {
        cout << stack2.top() << " ";
        stack2.pop();
    }

    return 0;
}