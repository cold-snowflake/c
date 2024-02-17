#include <stdio.h>

// temperature table

void temp()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Temperature\n");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
}


// programm that transform temprage from fahr to celsium

void change_temp()
{
    int fahr;
    float celsium;
    printf("Enter temperature in fahr: ");
    scanf("%d", &fahr);
    celsium = (5.0 / 9.0) * (fahr-32);
    printf("%6.1f\n", celsium);
}

int main()
{
    temp();
    change_temp();
}