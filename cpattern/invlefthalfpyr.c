#include <stdio.h>

int invlhp(int b);

int main(){
    int base;
    printf("Enter base: ");
    scanf("%d",&base);
    invlhp(base);
    return 0;
}

int invlhp(int b){
    for(int i=0;i<b;i++){
        for(int k=0;k<i;k++){
            printf(" ");
        }
        for(int j=5-i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}