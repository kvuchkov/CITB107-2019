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

void printMemory(const vector<int> &numbers)
{
    cout << "Memory Addresses:" << endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << &numbers[i] << endl;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    vector<int> numbers;
    print(numbers);

    numbers.push_back(10);
    print(numbers);

    numbers.push_back(20); // 20 is added at the end of the vector
    print(numbers);
    printMemory(numbers); // Addresses are sequential with 4 bytes (int) difference

    numbers.push_back(30);
    print(numbers);       // Capacity is bigger than size
    printMemory(numbers); // Addresses are different after capacity increase

    return 0;
}
