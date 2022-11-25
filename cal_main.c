#include <stdio.h>
#include <stdlib.h>
#include <arithmetic.h>

int main(int argc, char *argv[])
{
    int b = atoi(argv[1]);
    int c = atoi(argv[2]);

    printf("===============>\n");
    printf("===============>\n");
    printf("===============>\n");
    printf("===============>\n");
    printf("%d + %d => %d\n", b, c, add(b, c));
    printf("%d - %d => %d\n", b, c, sub(b, c));
    printf("%d * %d => %d\n", b, c, mul(b, c));
    printf("%d / %d => %d\n", b, c, dur(b, c));
    printf("===============\n");

    return 0;
}
