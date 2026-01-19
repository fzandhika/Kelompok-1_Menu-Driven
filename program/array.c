#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void programArray() {
    char key;
    int n, i, j, temp;
    int angka[100];

    system("cls");
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (angka[j] > angka[j + 1]) {
                temp = angka[j];
                angka[j] = angka[j + 1];
                angka[j + 1] = temp;
            }
        }
    }

    printf("\nData setelah diurutkan (Ascending): ");
    for (i = 0; i < n; i++) {
        printf("%d ", angka[i]);
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
