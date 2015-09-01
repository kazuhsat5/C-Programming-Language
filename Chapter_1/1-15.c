#include <stdio.h>

int getCelsius(int fahr);

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* 温度表の下限 */
    upper = 300;    /* 上限 */
    step = 20;      /* きざみ */

    fahr = upper;

    printf("%s %s\n", "fahr", "celsius");

    while (fahr >= lower) {
        celsius = getCelsius(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
}

int getCelsius(int fahr)
{
    return (5.0/9.0 * (fahr-32.0));
}
