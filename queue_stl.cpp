#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // create a queue of type string
    queue<string> q;

    // push elements in the queue
    q.push("Hello");
    q.push("World");

    cout << "First element of queue: " << q.front() << endl;

    // pop elements from the queue
    q.pop();
    cout << "First element of queue after popping: " << q.front() << endl;
}