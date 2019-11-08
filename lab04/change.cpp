#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declaration
    const int LEVA = 100;
    int left, total, paid, change;

    // Input
    cout << "Total: ";
    cin >> total;
    cout << "Paid: ";
    cin >> paid;

    left = change = paid - total;

    if (paid < total)
    {
        cout << "Customer owes more money!" << endl;
        return -1; // Terminating the program with error code -1
    }

    // Format Configuration - two digits after the decimal point.
    cout << fixed << setprecision(2);

    cout << "Change: " << change / (float)LEVA << endl;
    int value = 100 * LEVA;
    bool divideByTwo = true;
    while (left)
    {
        int count = left / value;
        left = left % value;
        if (count)
            cout << count << " x " << value / (float)LEVA << " BGN" << endl;

        // Assign value to the next smaller unit
        if (divideByTwo)
            value /= 2;
        else
            value /= 5;
        
        divideByTwo = !divideByTwo;
    }

    return 0;
}