#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int a = 25;
    float b = 3.14f;
    char c = 'A';
    uint8_t d =255;

    printf("int: %d, float: %.2f, char: %c, uint8_t: %u\n", a, b, c, d);

    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(uint8_t) = %zu\n", sizeof(uint8_t));

    d = d + 1;
    printf("d after adding 1: %u\n", d);

    return 0;
}