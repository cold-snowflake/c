#include <stdio.h>

#define LOWER  0
#define UPPER  300
#define STEP   20

// temperature table

void temp()
{
    float fahr, celsius;

    fahr = LOWER;
    printf("Temperature\n");
    while (fahr <= UPPER)
    {
        celsius = (5.0 / 9.0) * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += STEP;
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


// revers function

void fahr_in_for()
{
    int fahr;
    for (fahr=UPPER; fahr>= LOWER; fahr = fahr - STEP)
    {
        printf("%3d\t%6.1f\n",fahr, (5.0 / 9.0) * (fahr-32));
    }
}

int main()
{
    fahr_in_for();
}