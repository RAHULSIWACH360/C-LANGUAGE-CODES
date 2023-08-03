
// Program for calculation value of distance in different units.
#include <stdio.h>

int main()
{
    float km, m, cm, feet, inch;

    printf("Entre the distance in kilometer\n");
    scanf("%f", &km);

    printf("The value of distance in kilometer is %f\n", km);

    m = (km * 1000);
    cm = (m * 100);
    feet = (km * 3280.8);
    inch = (feet * 12);

    printf("The value of distance in meter is %f\n", m);
    printf("The value of distance in centimeter is %f\n", cm);
    printf("The value of distance in feet is %f\n", feet);
    printf("The value of distance in inch is %f\n", inch);

    return 0;
}
