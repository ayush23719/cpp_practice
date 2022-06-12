#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // create a deque
    deque<int> d;

    // insert elements in the deque from front
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);

    // insert elements in the deque from back
    d.push_back(5);
    d.push_back(6);

    cout << "queue before popping: ";
    for (int i : d)
        cout << i << " ";
    cout << endl;

    // remove elements from the deque from front
    d.pop_front();
    d.pop_front();

    // remove elements from the deque from back
    d.pop_back();
    d.pop_back();

    cout << "queue after popping: ";
    for (int i : d)
        cout << i << " ";
    cout << endl;

    // use .erase function to remove elements from the deque
    d.erase(d.begin(), d.begin() + 1);
    cout << "queue after erasing: ";
    for (int i : d)
        cout << i << " ";
    cout << endl;
}
