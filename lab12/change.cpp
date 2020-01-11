#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const int LEVA = 100;

vector<int> getAvailableUnits() {
    vector<int> units;
    units.reserve(13);
    
    units.push_back(100*LEVA);
    units.push_back(50*LEVA);
    units.push_back(20*LEVA);
    units.push_back(10*LEVA);
    units.push_back(5*LEVA);
    units.push_back(2*LEVA);
    units.push_back(1*LEVA);
    units.push_back(50);
    units.push_back(20);
    units.push_back(10);
    units.push_back(5);
    units.push_back(2);
    units.push_back(1);
    
    return units;
}

vector<int> calculateChange(const vector<int> &units, int amount) {
    vector<int> change;
    change.reserve(units.size());
    for(auto unit : units)
    {
        int count = amount / unit;
        amount %= unit;
        change.push_back(count);
    }
    return change;
}

int main()
{
    // Declaration
    int left, total, paid, changeAmount;
    vector<int> units = getAvailableUnits();

    // Input
    cout << "Total: ";
    cin >> total;
    cout << "Paid: ";
    cin >> paid;

    left = changeAmount = paid - total;

    if (paid < total)
    {
        cout << "Customer owes more money!" << endl;
        return -1; // Terminating the program with error code -1
    }

    // Format Configuration - two digits after the decimal point.
    cout << fixed << setprecision(2);

    cout << "Change: " << changeAmount / (float)LEVA << endl;

    vector<int> change = calculateChange(units, changeAmount);

    for (int i=0; i<change.size(); i++) {
        auto count = change[i];
        auto unit = units[i];

        if (count > 0) {
            cout << count << " x " << unit / (float)LEVA << " BGN" << endl;
        }
    }

    return 0;
}