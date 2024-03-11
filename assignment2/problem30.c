/*
Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:
1634 = 1^5 + 6^4 + 3^4 + 4^4
8208 = 8^4 + 2^4 + 0^4 + 8^4
9474 = 9^4 + 4^4 + 7^4 + 4^4
As 1 = 1^4 is not a sum it is not included.
The sum of these numbers is 1634 + 8208 + 9474 = 19316.
Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.
*/

#include <stdio.h>
#include <math.h>

#define POWER 5

int sumOfPowers(int num) {
   
    int sum = 0;

    while (num > 0) {
        sum += pow(num % 10, POWER);
        num /= 10;
    }
    return sum;
}

int main() {

    int total_sum = 0;

    for (int i = 10; i < 354294; i++) {
        if (i == sumOfPowers(i)) {
            total_sum += i;
        }
    }

    printf("The sum of all the numbers that can be written as the sum of fifth powers of their digits is: %d\n", total_sum);

    return 0;
}
