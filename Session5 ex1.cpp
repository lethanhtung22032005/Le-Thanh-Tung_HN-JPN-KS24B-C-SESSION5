#include <stdio.h>

int main() {
    int secretNumber = 42; // S? nguyên du?c khai báo tru?c
    int userInput;

    printf("Chào m?ng b?n d?n v?i trò choi doán s?!\n");

    // L?p cho d?n khi ngu?i dùng nh?p dúng s?
    do {
        printf("Hãy nh?p m?t s? nguyên: ");
        scanf("%d", &userInput);

        if (userInput < secretNumber) {
            printf("S? b?n nh?p nh? hon s? bí m?t. Th? l?i!\n");
        } else if (userInput > secretNumber) {
            printf("S? b?n nh?p l?n hon s? bí m?t. Th? l?i!\n");
        } else {
            printf("Chúc m?ng! B?n dã doán dúng s? bí m?t là %d.\n", secretNumber);
        }
    } while (userInput != secretNumber);

    return 0;
}
