#include <stdio.h>

int main()
{
    int jml_transaksi;
    int nom_transaksi;
    int total_transaksi = 0;

    scanf("%d", &jml_transaksi);

    if (jml_transaksi <= 0){
        printf("Tidak ada transaksi hari ini");
    } else {
        for (int i = 0; i < jml_transaksi; i++){
            scanf("%d", &nom_transaksi);
            total_transaksi = total_transaksi + nom_transaksi;
        }
        printf("Jumlah transaksi hari ini: %d", total_transaksi);
    }
}
