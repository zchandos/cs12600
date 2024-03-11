/*
 Self Powers
 The series, 1^1 + 2^3 + ... + 10^10 = 10405071317.
 Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000
 */

#include <stdio.h>

int main() {

    long long int sum = 0;
    long long int modulus = 10000000000LL;

    for (int i = 1; i <= 1000; i++) {
        long long int base = i;
        long long int result = 1;

        for (int j = 0; j < i; j++) {
            result = (result * base) % modulus;
        }

        sum = (sum + result) % modulus;
    }

    printf("Last ten digits: %lld\n", sum);

    return 0;
}