#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string player_name = "Dzakiy";
    int score = 100;
    double pi = M_PI;

    puts("### Contoh puts ###");
    puts("Halo, Ini hanya String");

    printf("\n### Contoh printf ###\n");
    printf("Nama    : %s\n", player_name.c_str());
    printf("Score   : %d\n", score);
    printf("Pi      : %.4f\n", pi);

    cout << "\n### Contoh cout ###" << endl;
    cout << "Nama    :" << player_name << endl;
    cout << "Score   :" << score << endl;
    cout << "Pi      :" << pi << endl;
}