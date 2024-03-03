#include <stdio.h>

int main(){
    int elemen_array;
    int array[elemen_array];
    int jumlah = 0;

    scanf("%d", &elemen_array);
    
    for (int i = 0; i < elemen_array; i++){
        scanf("%d", &array[i]);
        jumlah = jumlah + array[i];
    }
    printf("Hasil penjumlahan seluruh elemen pada array adalah: %d\n", jumlah);
}