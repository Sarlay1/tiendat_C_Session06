#include<stdio.h>

int main() {
    int number[5], num1 = 0, num2 = 0; 
    printf("Moi ban nhap 5 so nguyen:\n");

    for (int i = 0; i < 5; i++) { 
        printf("So thu %d: ", i + 1);
        scanf("%d", &number[i]);

        if (number[i] % 2 == 0) { 
            num1++;
        } else { 
            num2++;
        }
    }

    
    printf("Co %d so chan.\n", num1);
    printf("Co %d so le.\n", num2);

    return 0; 
}

