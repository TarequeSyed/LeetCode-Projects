/* LeetCode problem 1:
 Reversing an Array: 
 Leet code does not allow main(), printf or scanf functions like that; if it asks to reverse an array, just give it 'void reverseString' function only*/


#include <stdio.h>

// This is the classic code of reversing a string (if we have to reverse word): 
 void reverseString(char* s, int sSize) {
        for (int i = 0; i < sSize / 2; i++) {
            char temp = s[i];
            s[i] = s[sSize - i - 1];            
            s[sSize - i - 1] = temp;

        }
 } 

 int main() {
    char str[100];
    printf("Enter a word s: ");
    scanf(" %s", str);               // We are using scanf because we only need to reverse a word.

    int len;
    for (len = 0; str[len] != '\0'; len++);           // This will count the size of the word.
    reverseString(str, len);                          // This will reverse the word.
    printf("Reversed string: %s\n", str);

    return 0;
 }

    

    
