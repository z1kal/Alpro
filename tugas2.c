#include <stdio.h>

int desil = 1;

void main() {
    int a = 10,b = 20;
    int hasil = a % b / a * b - a + b;
    printf("Hasil: %d\n",hasil);
    if (hasil > 50 || desil == 1) {
        printf("Hasil lebih dari 50\n");
        int bansos = 70;
        hasil += bansos;
        printf("Dan mendapatkan bansos sebesar %d dan sekarang menjadi: %d\n",bansos,hasil);
    } else printf("Hasil kurang dari 50\n");
    return;
}