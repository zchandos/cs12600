#include <stdio.h>
#include <math.h>

int main() {

    printf("Enter a to calculate the area of a circle or b to to calculate the circumference of a circle: ");
    
    char input;
    float radius;
    float area;
    float circumference;
    
    scanf(" %c", &input);
    
    if(input == 'a'){
        printf("Enter radius of circle: ");
        scanf("%f", &radius);
        area = M_PI * pow(radius, 2);
        printf("Area of the circle is: %.2f", area);
    }
    else if(input == 'b'){
        printf("Enter radius of circle: ");
        scanf("%f", &radius);
        circumference = 2 * M_PI * radius;
        printf("Circumference of the circle is: %.2f", circumference);
    }
    else{
        printf("Invaid Input");
    }
}