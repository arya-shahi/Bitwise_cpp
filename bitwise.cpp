//  ARYA SHAHI
//  23070123030
// AIM- Perform Bitwise Operations

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Bitwise Operations on two numbers"<<endl;
    cout << "Enter the number 1:";
    cin >> a;
    cout << "Enter the number 2:";
    cin >> b;
    cout << "AND:"<< (a & b)<< endl;
    cout << "OR:" << (a|b)<< endl;
    cout << "NOT:" << (~a)<< endl;
    cout << "XOR:" << (a^b)<< endl;
    cout << "Left Shift:" << (a<<1)<< endl;
    cout << "Right Shift:" << (a>>2)<< endl;

    return 0;
}
