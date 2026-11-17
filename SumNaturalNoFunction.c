#include <stdio.h>
// Function to calculate the sum of natural numbers recursively
int sumOfNaturalNumbers(int n) { 
 
 if (n == 1) { 
 return 1; 
 } 
 else { 
 return n + sumOfNaturalNumbers(n - 1);
 } 
} 
int main() 
{ 
 int num; 
 printf("Enter a positive integer: ");
 scanf("%d", &num); 
 if (num <= 0) { 
 printf("Please enter a positive integer.\n");
 } else { 
 int sum = sumOfNaturalNumbers(num); 
 printf("The sum of natural numbers up to %d is: %d\n", 
num, sum); 
 } 
 return 0;
}