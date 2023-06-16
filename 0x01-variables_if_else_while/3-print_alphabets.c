#include <stdio.h>

/**
 * main -  Determines if  the alphabet in lowercase or in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void) {

    char low;
    char uppercase;

    for (low = 'a'; low <= 'z'; low++) {
        putchar(low);
    }
    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++) {
        putchar(uppercase);
    }

    putchar('\n');

    return 0;
}
