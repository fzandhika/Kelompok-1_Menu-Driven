#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void programPerulangan() {
    system("cls");
    char key;

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = rand() % (max - min + 1) + min;

    printf("=== Game Tebak Angka ===\n");

    do{
        printf("Tebak Angka diantara %d - %d: ", min,max);
        scanf("%d", &guess);
        tries++;

        if(guess < answer){
            printf("Masih Rendah!\n");
        }
        else if(guess > answer){
            printf("Terlalu Tinggi!\n");
        }
        else {
            printf("Benar\n");
        }

    }while (guess != answer);

    printf("Jawabannya adalah %d\n", answer);
    printf("Butuh %dx Percobaan\n", tries);

    printf("\nTekan ENTER untuk kembali ke menu\n");
    printf("Tekan ESC untuk keluar\n");

    while (1) {
        key = getch();
        if (key == 13) {        // ENTER
            return;
        } else if (key == 27) { // ESC
            system("cls");
            exit(0);
        }
    }
}
