#include <stdio.h>

int main() {
    int n;

    // Y�u c?u ng�?i d�ng nh?p m?t s? nguy�n d��ng t? 1 �?n 10
    do {
        printf("Nhap mot so nguyen duong tu 1 den 10: ");
        scanf("%d", &n);
        if (n < 1 || n > 10) {
            printf("Vui long nhap so trong khoang tu 1 den 10!\n");
        }
    } while (n < 1 || n > 10);

    // In b?ng c?u ch��ng
    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

