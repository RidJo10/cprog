#include <stdio.h>

int ip(int b);

int main(){
    int base;
    printf("Enter base: ");
    scanf("%d",&base);
    ip(base);
    return 0;
}

int ip(int b){
    for(int i=b;i>0;--i){
        for(int j=0;j<b-i;++j){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);++k){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}