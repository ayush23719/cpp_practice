#include <iostream>
#include <map>

using namespace std;

int main()
{
    // map is a collection of key-value pairs, each value is associated with a key
    // no two values can have the same key
    // map is implemented as a hash table
    // map is a container that stores elements in sorted order, based on the key

    //  create a map
    map<int, string> m;

    // insert elements in the map
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";

    // another way to insert elements in the map
    m.insert({4, "four"});

    // print the map in sorted order using .first and .second which are the key and value
    for (auto i : m)
        cout << i.first << " " << i.second << endl;
}