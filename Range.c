#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter any three No.: ");
    scanf("%d %d %d" ,&a,&b,&c);
    if(c<=b && c>=a){
        printf("Third digit is in the Range of First and Second No.");
    }
    else{
        printf("Third digit is NOT in the Range of First and Second No.");
    }

    return 0;
}