#include <iostream>

using namespace std;

// Legacy function, for backward compatability
unsigned readPercentage();

// New function
unsigned readPercentage(istream &in);

int main(int argc, char const *argv[])
{
    unsigned a, b, c;
    a = readPercentage();
    b = readPercentage(cin);
    c = readPercentage(cin);

    cout << a << "% " << b << "% " << c << "%" << endl;

    return 0;
}

unsigned readPercentage()
{
    return readPercentage(cin);
}

unsigned readPercentage(istream &in)
{
    unsigned x;
    cout << "Enter %: " << endl;
    while (in >> x && x > 100)
    {
        cout << "Please, enter a number between 0 and 100!" << endl;
    }
}