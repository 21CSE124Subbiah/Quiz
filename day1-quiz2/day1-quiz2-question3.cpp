#include <stdio.h>
#include <math.h>

int main() {
    int Hours, Days, Workers;
    printf("Enter total hours needed: ");
    scanf("%d", &Hours);
    printf("Enter number of days: ");
    scanf("%d",&Days);
    printf("Enter number of workers: ");
    scanf("%d",&Workers);
    int training = Days * (10/100);
    int normalHours = (Days - training) * Workers * 8;
    int overtime = Days * Workers * 2;
    int totalHours = normalHours + overtime;
    if (totalHours >= Hours)
        printf("Yes! %d hours left.\n", totalHours - Hours);
    else
        printf("Not enough time! %d hours needed.\n", Hours - totalHours);

    return 0;
}

