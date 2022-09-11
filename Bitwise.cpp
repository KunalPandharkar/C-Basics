#include <iostream>
using namespace std;

int main()
{
    // Bitwise Operators

    // AND (&)
    int a = 5, b = 3; // 101 011
    cout << (a & b) << endl;

    // OR (|)
    cout << (a | b) << endl;

    // Xor (^) // 101 011 = 110
    cout << (1 ^ 2) << endl;

    // Not (~) // 101 - 010
    bool t = true;
    cout << ~t << endl;

    a = 6;

    // Right Shift (>>) a = 110 001
    cout << (a >> 2) << endl;

    // Left Shift (<<) 110 000

    a = 1; // a = 00000010
    cout << (a << 9);
}