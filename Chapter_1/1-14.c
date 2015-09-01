#include <stdio.h>

int main()
{
    int c, cnt;

    cnt = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\n') {
            ++cnt;
            printf("%c", '*');
        }
    }
}
