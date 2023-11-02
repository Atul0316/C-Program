//Write a C program that takes an hour in the 24-hour format as input and identifies the time of day as "Morning," "Afternoon," "Evening," or "Night." Implement this using a series of if statements. Ensure that the program also checks for invalid input, displaying an appropriate message if the entered hour is not within the valid range (0-23). Present the program with a suitable title and header for clarity.


#include <stdio.h>

int main() {
    int hour;
     printf("Enter the hour (0-23): ");
    scanf("%d", &hour);
    if (hour >= 0 && hour <= 23) {
        if (hour >= 0 && hour < 6) {
            printf("Time of day: Night\n");
        } else if (hour < 12) {
            printf("Time of day: Morning\n");
        } else if (hour < 18) {
            printf("Time of day: Afternoon\n");
        } else {
            printf("Time of day: Evening\n");
        }
    } else {
        printf("Invalid input. Please enter an hour between 0 and 23.\n");
    }

    return 0;
}
