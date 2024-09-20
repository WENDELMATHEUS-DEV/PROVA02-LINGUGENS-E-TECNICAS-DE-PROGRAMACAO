#include <stdio.h>

void conv_base(int n, int b) {
    char r[32];
    int i = 0;

    while (n > 0) {
        r[i++] = (n % b < 10) ? (n % b + '0') : (n % b - 10 + 'A');
        n /= b;
    }

    printf("Resultado: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", r[j]);
    }
    printf("\n");
}

int main() {
    int n, b;

    printf("Numero decimal: ");
    scanf("%d", &n);

    do {
        printf("Base (2 a 16): ");
        scanf("%d", &b);
    } while (b < 2 || b > 16);

    conv_base(n, b);
    return 0;
}
