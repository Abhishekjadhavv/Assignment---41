// Reverse a string using a stack.
// Example:
// Input: str = "Reverse me"
// Output: em esreveR

#include <iostream>
#include <stack>
using namespace std;

void reverse(string &s)
{
    stack<char> stk;
    for (int i = 0; i < s.length(); i++)
    {
        stk.push(s[i]);
    }
    s = "";
    while (!stk.empty())
    {
        s += stk.top();
        stk.pop();
    }
}

int main()
{
    string s = "Abhishek jadhav";
    reverse(s);
    cout << s;
    return 0;
}
