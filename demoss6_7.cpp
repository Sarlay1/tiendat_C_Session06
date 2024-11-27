#include <stdio.h>

int main() {
    int num, i;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    printf("Cac uoc cua %d la: ", num);
    for (i = 1; i <= abs(num); i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

