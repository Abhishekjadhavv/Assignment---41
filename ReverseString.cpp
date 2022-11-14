// Reverse the Words of a String using Stack.
// Example:
// Input: str = “I Love To Code”
// Output: Code To Love I

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    string str = "I Love To Code";
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            s.push(temp);
            temp = "";
        }
        else
        {
            temp += str[i];
        }
    }

    s.push(temp);
    
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}