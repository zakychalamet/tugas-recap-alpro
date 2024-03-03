#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Ini fungsi buat men-generate bilangan acak antara min dan max
int bilanganAcak(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

// Ini fungsi buat ngecek tebakannya dah bener apa belom
int periksaTebakan(int bilangan, int tebakan)
{
    if (tebakan == bilangan)
    {
        printf("Selamat! Kamu menebak bilangan yang benar.\n");
        return 1; // Return 1 kalo tebakannya dah bener
    }
    if (tebakan < bilangan)
    {
        printf("Terlalu rendah! Coba lagi.\n");
    }
    else
    {
        printf("Terlalu tinggi! Coba lagi.\n");
    }
    return 0; // Return 0 kalo masi blm bener
}

int main()
{
    int bilanganMin = 1;
    int bilanganMax = 100;
    int bilanganTarget;
    int tebakan;
    int percobaan = 0;
    char mainLagi;

    srand(time(NULL));

    printf("Selamat datang praktikan tercinta di Permainan Tebak Bilangan!\n");
    printf("Aku udah milih sebuah bilangan antara %d dan %d. Kira kira kamu bisa ga yaaaa nebaknya?\n", bilanganMin, bilanganMax);

    // Memanggil fungsi bilanganAcak berdasarkan nilai min dan max yang telah ditentukan
    bilanganTarget = bilanganAcak(bilanganMin, bilanganMax);

    do
    {
        printf("Masukan tebakanmu: ");
        scanf("%d", &tebakan);
        percobaan ++;

        // Memanggil fungsi periksaTebakan berdasarkan tebakan yang kamu masukan
        if (periksaTebakan(bilanganTarget, tebakan))
        {
            printf("Kamu melakukan %d percobaan.\n", percobaan);
            printf("Apakah kamu ingin bermain lagi? (Y/T): ");
            scanf("%c", &mainLagi);
            if (mainLagi == 'Y' || mainLagi == 'y')
            {
                // Men-generate bilangan baru untuk permainan selanjutnya
                bilanganTarget = bilanganAcak(bilanganMin, bilanganMax);
                percobaan = 0;
                printf("\nSaya telah memilih bilangan baru. Ayo bermain lagi!\n");
            }
            else
            {
                printf("Terima kasih telah bermain. Selamat tinggal!\n");
                break; // Keluar dari perulangan
            }
        }
    } while (1);

    return 0;
}