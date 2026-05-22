#include <stdio.h>

int hrglass(int b);

int main(){
    int base;
    printf("Enter base length: ");
    scanf("%d", &base);
    hrglass(base);
    return 0;
}

int hrglass(int b){
    if (b <= 0) {
        return 0;
    }

    for (int i = b; i > 0; i -= 2) {
        for (int j = 0; j < (b - i) / 2; ++j) {
            printf(" ");
        }
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    int start = (b % 2 == 0) ? 2 : 1;
    for (int i = start; i <= b; i += 2) {
        for (int j = 0; j < (b - i) / 2; ++j) {
            printf(" ");
        }
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}