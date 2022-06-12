#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector is a dynamic array which doubles its capacity when it is full

    vector<int> v;

    // can also be initialized with a size and a value
    vector<int> v2(10, 1);

    // to copy a vector into another vector
    vector<int> v3(v2);

    cout << "v3: ";
    for (int i : v3)
        cout << i << " ";

    // to insert an element in a vector use push_back function
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << "Element at 2nd index:" << v.at(2) << endl;
    cout << "First element of array:" << v.front() << endl;

    // to find capacity of vector use .capacity function
    cout << "Capacity of vector:" << v.capacity() << endl;

    // to find size of vector use .size function
    cout << "Size of vector:" << v.size() << endl;

    // to remove an element(last) from a vector use .pop_back function
    v.pop_back();

    cout << "after removing: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
}