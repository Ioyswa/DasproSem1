#include <iostream>
using namespace std;

int main() {
    int x = 5;

    cout << "x = " << x << endl;
    cout << "++x = " << ++x << "(pre increment)" << endl;
    cout << "x++ = " << x++ << "(post increment)" << endl;
    cout << "x = " << x << endl;
    
    int y = 5;
    
    cout << "y = " << y << endl;
    cout << "--y = " << --y << "(pre increment)" << endl;
    cout << "y-- = " << y-- << "(post increment)" << endl;
    cout << "y = " << y << endl;
}