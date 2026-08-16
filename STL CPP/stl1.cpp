#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse, find
using namespace std;

int main() {
    // 1. Initialization
    vector<int> v1;                     // empty vector
    vector<int> v2(5, 10);              // 5 elements, all 10
    vector<int> v3 = {1, 2, 3, 4, 5};   // initializer list

    cout << "Initial v3: ";
    for(int x : v3) cout << x << " ";
    cout << "\n";

    // 2. Adding elements
    v3.push_back(6);   // add at end
    v3.push_back(7);

    // 3. Removing elements
    v3.pop_back();     // removes last element
    v3.erase(v3.begin() + 1); // remove second element

    // 4. Insert element
    v3.insert(v3.begin() + 2, 99);

    // 5. Access elements
    cout << "First element: " << v3.front() << "\n";
    cout << "Last element: " << v3.back() << "\n";
    cout << "Element at index 2: " << v3.at(2) << "\n";

    // 6. Iterators
    cout << "Using iterators: ";
    for(auto it = v3.begin(); it != v3.end(); ++it)
        cout << *it << " ";
    cout << "\n";

    cout << "Reverse iterators: ";
    for(auto rit = v3.rbegin(); rit != v3.rend(); ++rit)
        cout << *rit << " ";
    cout << "\n";

    // 7. Capacity functions
    cout << "Size: " << v3.size() << "\n";
    cout << "Capacity: " << v3.capacity() << "\n";
    v3.resize(10, -1);   // resize to 10, fill with -1
    cout << "After resize: ";
    for(int x : v3) cout << x << " ";
    cout << "\n";
    v3.reserve(20);      // reserve capacity
    cout << "Capacity after reserve: " << v3.capacity() << "\n";
    cout << "Is empty? " << (v3.empty() ? "Yes" : "No") << "\n";

    // 8. Algorithms
    sort(v3.begin(), v3.end());   // sort ascending
    cout << "Sorted: ";
    for(int x : v3) cout << x << " ";
    cout << "\n";

    reverse(v3.begin(), v3.end()); // reverse order
    cout << "Reversed: ";
    for(int x : v3) cout << x << " ";
    cout << "\n";

    auto it = find(v3.begin(), v3.end(), 99);
    if(it != v3.end())
        cout << "Found 99 at position: " << (it - v3.begin()) << "\n";
    else
        cout << "99 not found\n";

    return 0;
}
