#include <stdio.h>

void factorial(int n, unsigned long long *fact, int *sum) {

    *fact = 1;
    *sum = 0;

    for (int i = 1; i <= n; ++i) {

        *fact *= i;
        int num = *fact;

        while (num) {

            *sum += num % 10;
            num /= 10;

        }
    }
}

int main() {

    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    int sum;
    unsigned long long fact;

    factorial(num, &fact, &sum);

    printf("The Factorial of %d is : %llu\n", num, fact);
    printf("The sum of digits is : %d\n", sum);

    return 0;
}