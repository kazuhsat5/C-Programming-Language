#include <stdio.h>

int main()
{
    int dir, c, cnt, i;

    printf("direction [v/h]\n");

    dir = getchar();

    if (dir != 'v' && dir != 'h') {
        printf("Error: invalid\n");
        return 0;
    }

    printf("please, input word.\n");

    cnt = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            ++cnt;
        }
    }

    if (dir == 'v') {
         for (i=0; i<cnt; i++) {
            printf("*\n");
        }
    } else {
        for (i=0; i<cnt; i++) {
            printf("*");
        }
        printf("\n");
    }
}
