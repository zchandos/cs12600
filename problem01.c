#include <stdio.h>

int main() {

    int one;
    int two;
    float three;
    float four;

    printf("Enter two integers: ");
    scanf("%d %d", &one, &two);
    printf("%d %d", one + two, one - two);
    
    
    printf("\nEnter two floats: ");
    scanf("%f %f", &three, &four);
    printf("%.1f %.1f", three + four, three - four);
    
   return 0;
}