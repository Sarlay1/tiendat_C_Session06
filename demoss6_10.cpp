#include<stdio.h>

int main() {
    int number;
    printf("M?i b?n nh?p m?t s? nguyên b?t k?: ");
    scanf("%d", &number);  // Ð?c s? nguyên t? ngu?i dùng

    // N?u s? là âm, ta c?n chuy?n nó thành s? duong d? d? x? lý
    if (number < 0) {
        number = -number;  // Ð?i s? âm thành duong
    }

    printf("Các ch? s? trong s? b?n dã nh?p là: ");
    
    // Ki?m tra n?u s? là 0
    if (number == 0) {
        printf("0");
    } else {
        // In ra các ch? s? trong s?
        int digit;
        while (number > 0) {
            digit = number % 10;  // L?y ch? s? cu?i cùng
            printf("%d ", digit);  // In ch? s?
            number = number / 10;  // Lo?i b? ch? s? cu?i cùng
        }
    }

    printf("\n");
    return 0;
}

