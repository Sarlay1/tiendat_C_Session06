#include <stdio.h>

int main() {
    int year, month, days;

    // Nhap nam va thang
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang (1-12): ");
    scanf("%d", &month);

    // Kiem tra so ngay trong thang
    if (month < 1 || month > 12) {
        printf("Thang khong hop le.\n");
    } else {
        if (month == 2) {
            // Kiem tra nam nhuan
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; // Nam nhuan
            } else {
                days = 28; // Nam thuong
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            days = 30; // Thang co 30 ngay
        } else {
            days = 31; // Thang co 31 ngay
        }

        // In ket qua
        printf("Thang %d nam %d co %d ngay.\n", month, year, days);
    }

    return 0;
}

