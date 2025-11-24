#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int data_player[5];
    data_player[0] = 5;
    data_player[1] = 7;
    cout << *(data_player+1) << endl;
    cout << &data_player[0] << endl;
    cout << &data_player[1] << endl;

}