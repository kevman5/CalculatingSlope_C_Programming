#include <stdio.h>
int main(void)
{
    double num1, num2, pt1, pt2, slope;


    printf("Enter the first num: ");
    scanf("%lf", &num1);

    printf("Enter the second num: ");
    scanf("%lf", &num2);

    printf("Enter the first point: ");
    scanf("%lf", &pt1);

    printf("Enter the second point: ");
    scanf("%lf", &pt2);

    slope = (num1 - pt1) / (num2 - pt2);
    printf("Total Slope is %.2f",slope);

}

