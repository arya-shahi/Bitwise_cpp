#include <iostream>
using namespace std;

int main() {
    int number, shiftPosition, setBit, resetBit;

    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the bit position to shift: ";
    cin >> shiftPosition;

    setBit = number | (1 << shiftPosition);

    resetBit = number & (~(1 << shiftPosition));

    cout << "Bit reset result: " << resetBit << endl;
    cout << "Bit set result: " << setBit << endl;

    return 0;
}
