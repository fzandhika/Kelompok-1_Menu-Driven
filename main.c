#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "program.h"

int main() {
    char pilihan;
    while (1) {
        start:
        system("cls");
        printf("===== MENU UTAMA =====\n");
        printf("1. Program Perulangan   (Fauzan andhika 10124468)\n");
        printf("2. Program Kondisi      (John Roni 10124619)\n");
        printf("3. Program Array        (Raphael Eldon 11124171)\n");
        printf("ESC. Keluar\n");
        printf("\nTekan pilihan (tanpa Enter) : ");
        pilihan = getch();   // input tanpa enter
        switch (pilihan) {
            case '1':
                programPerulangan();
                break;
            case '2':
                programKondisi();
                break;
            case '3':
                programArray();
                break;
            case 27:  // ESC
                system("cls");
                printf("Program dihentikan.\n");
                return 0;
            default:
                system("cls");
                printf("\nWrong input!");
                getch();
                goto start;
        }
    }
}
