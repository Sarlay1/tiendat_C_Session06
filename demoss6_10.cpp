#include<stdio.h>

int main() {
    int number;
    printf("M?i b?n nh?p m?t s? nguy�n b?t k?: ");
    scanf("%d", &number);  // �?c s? nguy�n t? ngu?i d�ng

    // N?u s? l� �m, ta c?n chuy?n n� th�nh s? duong d? d? x? l�
    if (number < 0) {
        number = -number;  // �?i s? �m th�nh duong
    }

    printf("C�c ch? s? trong s? b?n d� nh?p l�: ");
    
    // Ki?m tra n?u s? l� 0
    if (number == 0) {
        printf("0");
    } else {
        // In ra c�c ch? s? trong s?
        int digit;
        while (number > 0) {
            digit = number % 10;  // L?y ch? s? cu?i c�ng
            printf("%d ", digit);  // In ch? s?
            number = number / 10;  // Lo?i b? ch? s? cu?i c�ng
        }
    }

    printf("\n");
    return 0;
}

