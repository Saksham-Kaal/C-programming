#include<stdio.h>
int main()
{
    int total,hours,minutes,seconds;
    printf("Enter seconds:");
    scanf("%d",&total);
    hours=total/3600;
    minutes=(total%3600)/60;
    seconds=total%60;
    printf("Time=%02d:%02d:%02d",hours,minutes,seconds);

    return 0;
}