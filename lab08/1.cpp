#include <iostream>

using namespace std;

class Fraction
{
public:
    Fraction()
    {
        num = 0;
        denom = 1;
    }

    Fraction(int n, int d)
    {
        num = n;
        denom = d;
    }
    void print(ostream &out)
    {
        out << num;
        if (denom > 1)
        {
            out << "/" << denom;
        }
        cout << endl;
    }

    Fraction add(Fraction other)
    {
        Fraction result;

        result.num = num * other.denom + other.num * denom;
        result.denom = denom * other.denom;
        result.normalize();
        return result;
    }

private:
    int num;
    int denom;

    void normalize()
    {
        int div = gcd(num, denom);
        num /= div;
        denom /= div;
    }
    int gcd(int a, int b)
    {
        if (a < b)
        {
            swap(a, b);
        }
        int r = a - b;
        while (r)
        {
            a = b;
            b = r;
            r = a - b;
        }
        return b;
    }
};

int main()
{
    Fraction zero;
    zero.print(cout);

    Fraction oneThird(1, 3);
    oneThird.print(cout);

    Fraction oneSixth(1, 6);
    oneSixth.print(cout);

    Fraction oneHalf = oneThird.add(oneSixth);
    oneHalf.print(cout);

    Fraction one = oneHalf.add(oneHalf);
    one.print(cout);

    return 0;
}
