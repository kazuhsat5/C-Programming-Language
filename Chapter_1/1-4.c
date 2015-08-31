#include <stdio.h>

int main()
{
    float fahr, celsius, lower, upper;
    int step;

    lower = -17.8;  /* 温度表の下限 */
    upper = 148.9;  /* 上限 */
    step = 20;      /* きざみ */

    celsius = lower;

    while (celsius <= upper) {
        fahr = (celsius + 32.0) / (5.0/9.0);
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
