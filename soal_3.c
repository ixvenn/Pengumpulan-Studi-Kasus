#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        long long kk = k;
        long long hasil = kk * kk * (kk - 1) * (kk - 1) / 2;
        printf("%lld\n", hasil);
    }
    return 0;
}