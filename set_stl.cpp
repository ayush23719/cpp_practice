#include <iostream>
#include <set>

using namespace std;

int main()
{
    // create a set
    set<int> s;

    // set can have only unique values, it cannot have duplicate values

    // insert elements in the set time complexity: O(log(n))
    s.insert(3);
    s.insert(0);
    s.insert(8);
    s.insert(9);

    // print the set in sorted order
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    // note that set does not repeat values

    // to erase an element from the set, use .erase function
    s.erase(s.begin());
    cout << "After erasing the first element: ";
    for (auto i : s)
        cout << i << " ";
    cout << endl;

    // to erase let's say the 2nd element we have to iterate through the set

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout << "After erasing the second element: ";
    for (auto i : s)
        cout << i << " ";

    // iterators are used to point at the memory addresses of STL containers
}