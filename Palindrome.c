#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    // Input integer from the user

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

     // Original number ko save karke rakhna zaroori hai

    // Number ko reverse karne ka logic

    while (n != 0) {
        remainder = n % 10;                        // Last digit nikalte hain
        reversed = reversed * 10 + remainder;           // Reversed number banate hain
        n /= 10;                                  // Last digit ko hata dete hain
    }

    // Original number aur reversed number ko compare karte hain

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    }
     else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}