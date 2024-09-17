#include <stdio.h>
#include <math.h>

int BIL_PRIMA(long long num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1; 
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; 
    }
    
    long long batas = sqrt(num); 
    for (long long i = 5; i <= batas; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    long long number;
    scanf("%lld", &number); 

    if (BIL_PRIMA(number)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}
