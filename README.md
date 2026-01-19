# Kelompok-1_Menu-Driven

## Kelompok 1
- Fauzan Andhika Prasetyo (10124468)
- Raphael Eldon Sumual (11124171)
- John Roni Anugrah Sijabat  (10124619)

## Menu-Driven Program (Bahasa C)
Program ini merupakan menu-driven application menggunakan bahasa C yang menerima input tanpa menekan ENTER (berbasis ASCII). Program menyediakan tiga menu utama yang masing-masing membuka file program terpisah, yaitu program Perulangan, Kondisi, dan Array.

Program dirancang sesuai konsep modular programming dan menggunakan pendekatan yang umum diajarkan pada praktikum dasar bahasa C.

## Fitur Utama
- Menu interaktif berbasis ASCII
- Input tanpa ENTER menggunakan `getch()`
- Deteksi tombol `ESC` untuk mengakhiri program
- Setiap menu berada di file .c terpisah
- Setelah program selesai:
  - Tekan `ENTER` → kembali ke menu
  - Tekan `ESC` → program berhenti

## Download File
Untuk download di GitHub klik file yang ingin di Download, klik titik tiga disebelah kanan dan klik tombol download atau <code>CTRL+SHIFT+S</code> (shortcut download).
Jika mendownload semua file klik Code (Tombol berwana hijau) setelah itu Download ZIP.

Anda dapat menjalankan program dengan hanya mendownload `menu.exe` tanpa mendownload semuanya.
Bila Windows defender muncul, klik "More info" agar dapat menjalankan Program.

## Compile
Untuk melakukan compile gunakan bash <code>gcc main.c program\perulangan.c program\kondisi.c program\array.c -o menu</code> dan untuk menjalankan program gunakan <code>./main.exe</code> pada terminal/powershell.

## Catatan Penting
- Program menggunakan library `conio.h` sehingga direkomendasikan dijalankan di Windows
- Untuk Linux atau macOS diperlukan pendekatan lain (misalnya termios)
- File menu.exe disertakan sebagai hasil kompilasi, bukan sumber utama
