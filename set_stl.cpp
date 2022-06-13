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

    // not that set elements do not repeat
}