#include <stdio.h>

int keliling(int sisi){
    return 4 * sisi;
}

int luas(int sisi){
    return sisi * sisi;
}

int volume(int sisi){
    return sisi * sisi * sisi;
}

int main(){
    int sisi;
    printf("Masukkan nilai sisi : ");
    scanf("%d", &sisi);

    int keliling_persegi = keliling(sisi);
    int luas_persegi = luas(sisi);
    int volume_kubus = volume(sisi);

    printf("Keliling Persegi    : %d\n", keliling_persegi);
    printf("Luas Persegi        : %d\n", luas_persegi);
    printf("Volume Kubus        : %d\n", volume_kubus);
}