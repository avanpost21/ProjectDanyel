#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    printf ("Введите числа:\n");
    scanf ("%d %d %d", &a, &b, &c);
        printf("a=%d\n", a + b);
        printf("b=%d\n", c - a);
        printf("c=%d\n", a + c + c);
    return 0;
}
