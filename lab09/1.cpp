#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int cnt = 0;
    int sum = 0;
    for (int i = 1; i < argc; i++)
    {
        ifstream fin(argv[i]);
        string line;
        while (getline(fin, line))
        {
            stringstream rin(line);
            string signature;
            getline(rin, signature, ',');
            if (signature == "CITB108")
            {
                int grade;
                string noop;
                while (rin >> grade)
                {
                    cnt++;
                    sum += grade;
                    string noop;
                    getline(rin, noop, ','); // remove any whitespaces and the comma so we can read the next integer from the stream
                }
            }
        }
    }

    cout << fixed << setprecision(2) << endl;
    cout << (double)sum / cnt << endl;

    return 0;
}
