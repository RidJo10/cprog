#include <stdio.h>

int rhombus(int a);
int ip(int b);

int main(){
    int h;
    printf("Enter height: ");
    scanf("%d",&h);
    rhombus(h);
    return 0;
}

int rhombus(int a){
    for(int i=1;i<=a;i++){
        for(int j=0;j<a-i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    --a;
    ip(a);
    return 0;
}

int ip(int b){
    for(int i=b;i>0;--i){
        for(int j=0;j<b-i;++j){
            printf(" ");
        }
        printf(" ");
        for(int k=1;k<=(2*i-1);++k){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}