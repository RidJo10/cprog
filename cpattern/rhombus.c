#include <stdio.h>

int rhombus(int a);

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
        for(int k=0;k<a;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}