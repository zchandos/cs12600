/*
Powerful Digit Counts
The, 5-digit number, 16807 = 7^5, is also a fifth power. Similarly, the 9-digit number, 134217728 = 8^9,
is a ninth power. How many n-digit positive integers exist which are also nth power?
 */

#include <stdio.h>
#include <math.h>

int main() {

    int count = 0;

    for (int n = 1; n < 22; n++) {
        int m = 1;
        double result = pow(m, n);
        while (result < pow(10, n)) {
            if (result >= pow(10, n - 1)) {
                count++;
            }
            m++;
            result = pow(m, n);
        }
    }

    printf("Number of n-digit positive integers that are also an nth power: %d\n", count);

    return 0;
}
 