/*
It can be seen that the number, 125874 and its double, 251748, contain exactly the same digits, but in a different order.
Find the smallest positive integer, x, such that 2x, 3x, 4x, 6x, and 6x, contain the same digits.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool hasSameDigits(int num1, int num2) {
    int count[10] = {0};
    while (num1 > 0) {
        count[num1 % 10]++;
        num1 /= 10;
    }
    while (num2 > 0) {
        count[num2 % 10]--;
        num2 /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

bool hasSameDigits2To6(int x) {
    for (int i = 2; i <= 6; i++) {
        if (!has_same_digits(x, i * x)) {
            return false;
        }
    }
    return true;
}

int main() {
    int x = 1;
    while (!hasSameDigits2To6(x)) {
        x++;
    }
    printf("The smallest positive integer x: %d\n", x);
    return 0;
}
