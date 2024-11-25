#include <stdio.h>

int main() {
    int n; // 
    int sum = 0; // Bi?n lýu t?ng

   
    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui long nhap mot so nguyen duong (n > 0)!\n");
        }
    } while (n <= 0);

    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}

