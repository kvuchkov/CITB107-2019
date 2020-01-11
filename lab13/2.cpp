#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1000;

void makeFriends(int friends[][MAX], int a, int b) {
    if (a > b) {
        swap(a, b);
    }
    friends[a][b] = 1;
} 

bool areFriends(int friends[][MAX], int a, int b) {
    if (a > b) {
        swap(a, b);
    }
    return friends[a][b];
}

int main(int argc, char const *argv[])
{
    int friends[MAX][MAX] = {}; // initialize the matrix with zeros

    string cmd;
    int a, b;
    
    while (cin >> cmd >> a >> b) {
        if (cmd == "f") {
            makeFriends(friends, a, b);
        } else if(cmd == "c") {
            if (areFriends(friends, a,b)) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        } else {
            cerr << "unrecognized command: " << cmd << endl;
        }
    }

    return 0;
}
