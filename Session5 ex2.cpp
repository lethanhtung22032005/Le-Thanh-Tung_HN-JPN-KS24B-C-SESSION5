#include <stdio.h>

int main() {
    
    int givenNumber = 99; 
    int userInput;

    printf("Nhap vao mot so nguyen cho den khi khop voi so cho truoc.\n");

    do {
        printf("Nhap mot so: ");
        scanf("%d", &userInput);

        if (userInput != givenNumber) {
            printf("So ban nhap chua dung. Hay thu lai!\n");
        }
    } while (userInput != givenNumber);

  
    printf("Chuc mung! Ban da nhap dung so %d.\n", givenNumber);

    return 0;
}

