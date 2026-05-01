#include<stdio.h>


int m35(int limit){
    int sum=0;
    for(int i=0;i<limit;i++){
        if(i%3==0||i%5==0){
        sum+=i;
        }
    }
    return sum;
}

int main(){
    int n;
    printf("Enter the terminal number: \n");
    scanf("%d",&n);
    int result=m35(n);
    printf("Result= %d",result);
    return 0;
}