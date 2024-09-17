#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char T[101], I[101];

    scanf("%s", T);
    scanf("%s", I);

    int lenT = strlen(T);
    int lenI = strlen(I);

    if (lenT != lenI) {
        printf("BERBEDA\n");
    } 
    else {
        if (strcmp(T, I) == 0) {
            printf("IDENTIK\n");
        } else {
            // Jika panjang sama, tapi tidak identik, maka "MIRIP"
            printf("MIRIP\n");
        }
    }

    return 0;
}