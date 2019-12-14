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
    int size;
    cin >> size;

    vector<int> numbers(size); // if you know the size upfront, you can create all the elements with the constructor
    print(numbers);
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i]; // We read directly into the vector, since elements already exist
        print(numbers);
    }

    return 0;
}
