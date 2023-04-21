#include <stdio.h>
#include <stdlib.h>
int main(void) {
    FILE* output;
    output = fopen("output.txt", "wt");
    fputs("Hello, World!\n", output);
    printf("Hello, World!\n");
    fclose(output);
    return 0;
}
