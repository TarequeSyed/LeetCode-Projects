// Perfect Square: 
#include <stdio.h>
#include <stdbool.h>

bool isPerfectSquare (int num) {
    if (num < 0) return false;
    for (int i = 0; i * i <= num; i++) {
        if (i * i == num)
            return true;
    }
    return false;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf(" %d", &num);

    if (!isPerfectSquare(num)) {
        printf("%d is not a perfect square.\n", num);
    } else {
        printf("%d is a perfect square.\n", num);
    }
    return 0;
}