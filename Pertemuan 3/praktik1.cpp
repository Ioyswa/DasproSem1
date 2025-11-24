#include <stdio.h>

int main() {
    int panjang = 0, lebar = 0, luas = 0;

    printf("Masukkan Nilai Lebar : ");
    scanf("%d",&lebar);
    
    printf("Masukkan Nilai panjang : ");
    scanf("%d",&panjang);

    luas = panjang * lebar;
    printf("Luas = %d\n", luas);

}