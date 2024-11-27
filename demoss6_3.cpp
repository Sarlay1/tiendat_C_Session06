#include <stdio.h>
#include <string.h>

int main() {
   
    char mat_khau[7] = "123456"; 
    
    printf("Vui long nhap mat khau: ");
    scanf("%s", &mat_khau);
    
    if (mat_khau == "123456") {
        printf("Mat khau dung! Chào mung ban.\n");
    } else {
        printf("Mat khau sai! Vui long thu lai.\n");
    }

    return 0;
}


