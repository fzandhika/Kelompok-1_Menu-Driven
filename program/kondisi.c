#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void programKondisi() {
    int usia;
    char jk;
    float tinggi_cm, tinggi_m, berat, imt;
    char key;

    system("cls");
    printf("=== PROGRAM INDEKS MASSA TUBUH ===\n");
    printf("Masukkan usia (tahun)        : ");
    scanf("%d", &usia);
    printf("Masukkan jenis kelamin (L/P): ");
    scanf(" %c", &jk);
    printf("Masukkan tinggi badan (cm)  : ");
    scanf("%f", &tinggi_cm);
    printf("Masukkan berat badan (kg)   : ");
    scanf("%f", &berat);

    // Konversi cm ke meter
    tinggi_m = tinggi_cm / 100.0;
    // Hitung IMT
    imt = berat / (tinggi_m * tinggi_m);

    system("cls");
    printf("\n--- HASIL PERHITUNGAN ---");
    printf("\nUsia           : %d tahun", usia);
    printf("\nJenis Kelamin  : %c", jk);
    printf("\nIMT            : %.2f", imt);
    
    // Penentuan kategori IMT
    if (imt < 18.5) {
        printf("\nKategori IMT   : Kurus");
    } else if (imt >= 18.5 && imt < 25) {
        printf("\nKategori IMT   : Normal");
    } else if (imt >= 25 && imt < 30) {
        printf("\nKategori IMT   : Gemuk");
    } else {
        printf("\nKategori IMT   : Obesitas");
    }
    
    printf("\n\nTekan ENTER untuk kembali ke menu\n");
    printf("Tekan ESC untuk keluar\n");

    while (1) {
        key = getch();
        if (key == 13) {
            return;
        } else if (key == 27) {
            system("cls");
            exit(0);
        }
    }
}
