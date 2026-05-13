#include <stdio.h>

int invrhp(int a);

int main(){
    int b;
    printf("Enter base length: ");
    scanf("%d",&b);
    invrhp(b);

    return 0;
}

int invrhp(int a){
    for(int i=a;i>=0;i--){
        for(int j=i;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}