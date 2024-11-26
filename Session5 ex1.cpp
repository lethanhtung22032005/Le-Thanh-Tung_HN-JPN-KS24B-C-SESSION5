#include <stdio.h>

int main() {
    int secretNumber = 42; // S? nguy�n du?c khai b�o tru?c
    int userInput;

    printf("Ch�o m?ng b?n d?n v?i tr� choi do�n s?!\n");

    // L?p cho d?n khi ngu?i d�ng nh?p d�ng s?
    do {
        printf("H�y nh?p m?t s? nguy�n: ");
        scanf("%d", &userInput);

        if (userInput < secretNumber) {
            printf("S? b?n nh?p nh? hon s? b� m?t. Th? l?i!\n");
        } else if (userInput > secretNumber) {
            printf("S? b?n nh?p l?n hon s? b� m?t. Th? l?i!\n");
        } else {
            printf("Ch�c m?ng! B?n d� do�n d�ng s? b� m?t l� %d.\n", secretNumber);
        }
    } while (userInput != secretNumber);

    return 0;
}
