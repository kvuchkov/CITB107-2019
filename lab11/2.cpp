#include <iostream>
#include <vector>

using namespace std;

int sum(const vector<int> &numbers)
{
    int s = 0;
    for (auto n : numbers) // C++11, auto is resolved to int at compile time
    {
        s += n;
    }
    return s;
}

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
    numbers.reserve(100); // increase capacity upfront
    cout << "Capacity: " << numbers.capacity() << endl;
    int n;
    while (cin >> n)
    {
        numbers.push_back(n);
        print(numbers); // capacity stays the same
    }

    numbers.shrink_to_fit(); // get rid of extra capacity
    cout << "Capacity: " << numbers.capacity() << endl;

    cout << "Sum: " << sum(numbers) << endl;

    return 0;
}
