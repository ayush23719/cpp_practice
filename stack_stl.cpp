#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // create a stack of type string
    stack<string> s;

    // push elements in the stack
    s.push("Hello");
    s.push("World");

    // top element of the stack
    cout << "Top element of stack: " << s.top() << endl;

    // pop elements from the stack
    s.pop();
    cout << "Top element of stack after popping: " << s.top() << endl;

    // size of the stack
    cout << "Size of stack: " << s.size() << endl;
}