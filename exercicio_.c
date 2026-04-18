#include <stdio.h>

int main() {
    float x, y, media;

    printf("Digite x: ");
    scanf("%f", &x);

    printf("Digite y: ");
    scanf("%f", &y);

    media = (x + y) / 2;

    printf("A nota final e %f\n", media);

    return 0;
}