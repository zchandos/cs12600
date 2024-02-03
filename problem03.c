int main() {
    int inputDays;
    int years, weeks, days, hours, minutes, seconds;

    // Take number of days as input
    printf("Enter the number of days: ");
    scanf("%d", &inputDays);

    // Calculate years, weeks, and days
    years = inputDays / 365;
    weeks = (inputDays % 365) / 7;
    days = (inputDays % 365) % 7;

    // Calculate hours, minutes, and seconds
    hours = inputDays * 24;
    minutes = hours * 60;
    seconds = minutes * 60;

    // Display the result
    printf("Years: %d\n", years);
    printf("Weeks: %d and Days: %d\n", weeks, days);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}