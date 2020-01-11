#include <iostream>

using namespace std;

int sum(int numbers[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += numbers[i];
    }
    return s;
}

const int MAXN = 10000;

int main(int argc, char const *argv[])
{
    int numbers[MAXN];
    
    int n = 0;
    while (cin >> numbers[n]) n++;

    cout << sum(numbers, n) << endl;

    return 0;
}
