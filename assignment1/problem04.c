#include <stdio.h>

int hcf(int x, int y, int z) {
    int s = (x < y && x < z) ? x : (y < z) ? y : z;
    for (int i = s; i > 0; i--) if (x % i == 0 && y % i == 0 && z % i == 0) return i;
    return 1;
}

int lcm(int x, int y, int z) {
    int l = (x > y && x > z) ? x : (y > z) ? y : z;
    for (int i = l; ; i += l) if (i % x == 0 && i % y == 0 && i % z == 0) return i;
}

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("HCF: %d\nLCM: %d\n", hcf(a, b, c), lcm(a, b, c));
    return 0;
}