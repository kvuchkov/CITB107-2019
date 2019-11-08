#include <iostream>
#include <limits>

using namespace std;

const int BIGGEST_INTEGER = numeric_limits<int>::max();

double add(int x, int y)
{
    if (x > BIGGEST_INTEGER - y)
    {
        cout << "ERROR: overflow!" << endl;
    }
    return x + y;
}
double substract(int x, int y)
{
    return x - y;
}
double multiply(int x, int y)
{
    return x * y;
}
double divide(int x, int y)
{
    if (y == 0)
    {
        cout << "ERROR: division by zero!" << endl;
        return 0;
    }
    return (double)x / y;
}

double calculate(int x, int y, char op)
{
    if (op == '+')
    {
        return add(x, y);
    }
    else if (op == '-')
    {
        return substract(x, y);
    }
    else if (op == '*')
    {
        return multiply(x, y);
    }
    else if (op == '/')
    {
        return divide(x, y);
    }
    else
    {
        cout << "ERROR: no such operator " << op << endl;
        return 0;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int x, y;
    char op;

    while (cin >> x >> op >> y)
    {
        double result = calculate(x, y, op);
        cout << x << op << y << "=" << result << endl;
    }

    return 0;
}
