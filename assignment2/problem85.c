/*
By counting carefully it can be seen taht a rectangular grid measuring 3 by 2 contains eighteen rectangles:
Although there exists no rectangular grid that contains exactly two million rectangles, find the area of the grid
with the nearest solution.
*/

#include <stdio.h>
#include <stdlib.h>

int countRectangles(int n, int m) {
    return n * (n + 1) * m * (m + 1) / 4;
}

int main() {
    int target = 2000000;
    int closestArea = 0;
    int closestRectangles = 0;
    
    for (int n = 1; n <= 100; n++) {
        for (int m = 1; m <= 100; m++) {
            int rectangles = countRectangles(n, m);
            if (abs(rectangles - target) < abs(closestRectangles - target)) {
                closestRectangles = rectangles;
                closestArea = n * m;
            }
        }
    }

    printf("The area of the grid nearest to 2 million are: %d x %d\n", closestArea, closestRectangles);

    return 0;
}
