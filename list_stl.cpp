#include <iostream>
#include <list>

using namespace std;

int main()
{
    // list uses doubly linked list

    // create a list
    list<int> l;

    // insert elements in the list
    l.push_front(1);

    // note that push front always inserts an elemnt at the beginning while push back always inserts an element at the end

    l.push_back(2);

    for (int i : l)
        cout << i << " ";

    cout << endl;

    // to erase elements from the list use .erase function
    l.erase(l.begin());

    // after erasing the first element
    for (int i : l)
        cout << i << " ";
}