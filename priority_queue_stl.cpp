#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // create a max heap
    priority_queue<int> maxi;

    // create a min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    // insert data
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    // print the max heap
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    // similarly for min heap
    mini.push(8);
    mini.push(4);
    mini.push(0);
    mini.push(3);

    // print the min heap
    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
}