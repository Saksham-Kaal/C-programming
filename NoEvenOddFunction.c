#include<stdio.h>
int isEven(int num){
    if(num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(isEven(n)){
        printf("%d is an even number.\n", n);
    }else{
        printf("%d is an odd number.\n", n);
    }
    return 0;
}