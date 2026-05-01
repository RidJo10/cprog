#include<stdio.h>

int n;
void rp(int n);

int main(){
    printf("Enter the base length of the pyramid: \n");
    scanf("%d",&n);
    rp(n);
    return 0;
}

void rp(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
        printf("*");
        }
        printf("\n");
    }
}