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

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    
    int *numbers = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    

    cout << sum(numbers, n) << endl;

    return 0;
}
