#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter your marks: ");
    scanf("%f", &a);
    if(a>=90.0)
    {
        printf("Grade A", a);
    }
    else if(a>=80.0){
        printf("Grade B", a);
    }
    else if(a>=70.0){
        printf("Grade C", a);
    }
    else if(a>=60.0){
        printf("Grade D", a);
    }
    else if(a>=50.0){
        printf("Grade E", a);
    }
    else {
        printf("Fail", a);
    }

    return 0;

}