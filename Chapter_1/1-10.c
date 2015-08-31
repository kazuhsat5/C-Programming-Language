#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        printf("%d^n", c);

        if (c == '\t') {
            printf("\\t");
        } else if (c == '\b') {
            printf("\\b");
        } else if (c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
    }
}
