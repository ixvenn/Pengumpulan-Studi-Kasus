#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    // Inputs
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    // Process and Outputs
    if (a + b == c) {
        printf("+");
    }
    else if (a - b == c) {
        printf("-");
    }
    else if (a * b == c) {
        printf("*");
    }
    return 0;
}