#include <stdio.h>

void merge(int intervals[][2], int n) {
    if (n <= 0) return;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (intervals[j][0] > intervals[j + 1][0])
                for (int k = 0; k < 2; k++)
                    intervals[j][k] ^= intervals[j + 1][k] ^= intervals[j][k] ^= intervals[j + 1][k];

    int result[n][2], index = 0;

    result[0][0] = intervals[0][0], result[0][1] = intervals[0][1];

    for (int i = 1; i < n; i++)
        if (intervals[i][0] <= result[index][1])
            result[index][1] = (intervals[i][1] > result[index][1]) ? intervals[i][1] : result[index][1];
        else
            result[++index][0] = intervals[i][0], result[index][1] = intervals[i][1];

    printf("Merged Intervals: [");
    for (int i = 0; i <= index; i++)
        printf("[%d,%d]%s", result[i][0], result[i][1], (i < index) ? "," : "]");
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of intervals: ");
    scanf("%d", &n);

    int intervals[n][2];

    for (int i = 0; i < n; i++)
        printf("Enter intervals %d : ", i + 1), scanf("%d %d", &intervals[i][0], &intervals[i][1]);

    merge(intervals, n);

    return 0;
}