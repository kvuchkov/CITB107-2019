#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &numbers)
{
    cout << "Size: " << numbers.size() << ", Capacity: " << numbers.capacity() << ", Values: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    vector<int> numbers;
    print(numbers);

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    print(numbers);

    auto first = numbers.begin(); // iterator, pointing to the first element (10)
    cout << *first << endl;       // read the value referenced by the iterator using *

    auto it = numbers.begin() + 1; // iterator, pointing to the second element (20)
    cout << *it << endl;

    numbers.insert(it, 15); // insert at a position specified by an iterator
    print(numbers);
    cout << *it << endl;
    cout << *(numbers.begin() + 1) << endl;

    numbers.erase(numbers.begin() + 2); // erase the third element (20)
    print(numbers);

    return 0;
}
