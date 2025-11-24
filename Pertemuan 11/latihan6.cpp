#include <iostream>
using namespace std;

void ubah_nilai(int x) {
    x = x + 10;
    cout << "Nilai di dalam fungsi = " << x << endl;
}

int main() {
    int a = 5;
    cout << "Nilai Sebelum fungsi dipanggil = " << a << endl;
    ubah_nilai(a);
    cout << "Nilai Setelah fungsi dipanggil = " << a << endl;

}