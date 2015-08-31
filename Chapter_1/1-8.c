#include <stdio.h>

int main()
{
    int c;
    int cs, ct, cn;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++cs;
        } else if (c == '\t') {
            ++ct;
        } else if (c == '\n') {
            ++cn;
        }
    }

    printf("Space  => %d", cs);
    printf("Tab    => %d", ct);
    printf("Return => %d", cn);
}
