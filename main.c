#include <stdio.h>
#include <stdbool.h>

float tinhLuongT13(int namKinhNghiem, int namLamViec) {
    int mucLuongCoBan;
    if (namKinhNghiem < 2) {
        mucLuongCoBan = 10;
    } else if (namKinhNghiem >= 2 && namKinhNghiem <= 5) {
        mucLuongCoBan = 20;
    } else {
        mucLuongCoBan = 30;
    }
    int tyLeThuong;
    if (namLamViec < 1) {
        tyLeThuong = 30;
    } else if (namLamViec >= 1 && namLamViec <= 2) {
        tyLeThuong = 50;
    } else if (namLamViec > 2 && namLamViec < 5) {
        tyLeThuong = 100;
    } else {
        tyLeThuong = 200;
    }
    return (float) mucLuongCoBan * tyLeThuong / 100;
}

int main() {
    int namKinhNghiem, namLamViec;
    while (true) {
        printf("Moi nhap so nam kinh nghiem.\n");
        scanf("%d", &namKinhNghiem);
        printf("Moi nhap so nam lam viec.\n");
        scanf("%d", &namLamViec);
        printf("Luong thang 13 la: %.2f\n", tinhLuongT13(namKinhNghiem, namLamViec));
        getchar();
        char choice;
        printf("Ban co muon bat dau lai khong? (y/n)\n");
        scanf("%c", &choice);
        getchar();
        if (choice == 'n' || choice == 'N') {
            printf("Dung chuong trinh.\n");
            break;
        }
    }

    return 0;
}