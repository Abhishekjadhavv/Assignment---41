// Create a stack of int type, and find the top most element in a stack.

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(14);
    s.push(16);
    s.push(18);
    cout << "Top element is " << s.top() << endl;
    return 0;
}