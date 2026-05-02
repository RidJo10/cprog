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
    for(int i=0;i<base;i++){
        for(int j=(i+1);j<base;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
}