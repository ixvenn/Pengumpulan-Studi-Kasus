#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long a, b;

    scanf("%lld", &a);
    scanf("%lld", &b);

    if (a > 0 && b > 0 && (a == 1 || b == 1)) {
        printf("+");
    }
    else if (a < 0 && b < 0) {
        printf("*");
    }
    else if (a > 0 && b > 0) {
        printf("*");
    }
    else if (a > 0 && b < 0) {
        printf("-");
    }
    else {
        printf("+");
    }
    // GG Kak Sanca, thanks for the hint!
    return 0;
}