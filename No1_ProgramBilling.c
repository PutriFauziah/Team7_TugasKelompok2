#include <stdio.h>
#include <ctype.h>

int main() {

    float waktu;
    char nama[20];
    char enter;
    int ulang;
    int convert, hasil, mod, harga, diskon, jumlah;
    int total = 0;

    enter = 'y';

    while (enter == 'y') {
        printf("====================================\n");
        printf("      Program Billing Team 7");
        printf("\n====================================\n");

        printf("Nama Pengguna : ");
        scanf("%s", nama);

        printf("Lama Pemakaian (Jam) : ");
        scanf("%f", &waktu);

        convert = waktu * 60;
        mod = convert % 60;
        hasil = convert / 60;

        if (mod == 15) {
            harga = 500;
        } else if (mod == 30) {
            harga = 1000;
        }else if (mod == 45) {
            harga = 1500;
        }else {
            harga = 0;
        }

        jumlah = 2000 * hasil + harga;

        if (convert < 300) {
            diskon = 0;
            total = jumlah - diskon;

        } else {
            diskon = jumlah * 20 / 100;
            total = jumlah - diskon;
        }
        printf("====================================\n");
        printf("Nama Pengguna   : %s\n", nama);
        printf("Lama Penggunaan : %d jam %d menit \n", hasil, mod);
        printf("Jumlah          : Rp. %d\n", jumlah);
        printf("Diskon          : Rp. %d\n", diskon);
        printf("                 -----------------  - \n");
        printf("Total Bayar     : Rp. %d\n", total);

        ulang = 1;
        while (ulang == 1) {
            printf("\nIngin menghitung lagi?(y/t)");
            scanf("%s", &enter);

            if (toupper(enter) == 'Y' || toupper(enter) == 'T') {
                ulang = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
