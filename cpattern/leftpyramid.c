#include<stdio.h>

void lp(int base);

int main(){
    int n;
    printf("Enter the base length of the pyramid: ");
    scanf("%d",&n);
    lp(n);
    return 0;
}

void lp(int base){
    for(int i=1;i<=base;i++){
        for(int j=i;j<base;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}