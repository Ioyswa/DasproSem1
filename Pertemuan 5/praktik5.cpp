#include <iostream>
using namespace std;

int main(){
    int blok[2][2][2] = {
        { {1, 2}, {3, 4} },
        { {5, 6}, {7, 8} }
    };
    cout << "Blok [0][0][0] = " << blok[0][0][0] << endl;
    cout << "Blok [0][1][1] = " << blok[0][1][1] << endl;
    cout << "Blok [1][0][1] = " << blok[1][0][1] << endl;
    cout << "Blok [1][1][0] = " << blok[1][1][0] << endl;

    return 0;
}