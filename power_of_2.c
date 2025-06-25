// Checking if the integer is power of 2 using bits:

#include <stdio.h>
#include <stdbool.h>

bool powerof2 (int n) {
    if (n <= 0) return false;
    return (n & (n-1)) == 0;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf(" %d", &n);

    if (!powerof2(n))
        printf("False.\n");
    
    else 
        printf ("True.\n");

    return 0;
}