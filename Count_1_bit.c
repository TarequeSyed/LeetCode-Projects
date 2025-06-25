// Counting bits of 1s in an integer:
#include <stdio.h>

int countbits (int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) count++;
        n >>= 1;
    }

    return count;
}

int main() {
    int n;
    printf("Enter integer: ");
    scanf(" %d", &n);
    printf("Number of 1s bit in %d: %d\n", n, countbits(n));

    return 0;

}