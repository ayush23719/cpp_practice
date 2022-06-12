#include <iostream>
#include <array>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // define an array of 5 elements array<type,size> array_name
    array<int, 5> arr2 = {1, 2, 3, 4, 5};

    // to find any element at specific index use .at function
    cout << "Element at 2nd index:" << arr2.at(2) << endl;

    // to find first element of array use .front function
    cout << "First element of array:" << arr2.front() << endl;

    // to find last element of array use.back function
    cout << "Last element of array:" << arr2.back() << endl;
}