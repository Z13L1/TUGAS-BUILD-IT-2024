#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int r;
    
    scanf("%d", &r);
    
    int  nilai_rama_tampan_pemberani[r];
    
    for (int i = 0; i < r; i++) {
        scanf("%d", & nilai_rama_tampan_pemberani[i]);
    }
    
    for (int i = 0; i < r - 1; i++) {
        for (int j = 0; j < r - i - 1; j++) {
            if ( nilai_rama_tampan_pemberani[j] > nilai_rama_tampan_pemberani[j + 1]) {
                int temp =  nilai_rama_tampan_pemberani[j];
                nilai_rama_tampan_pemberani[j] =  nilai_rama_tampan_pemberani[j + 1];
                 nilai_rama_tampan_pemberani[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < r; i++) {
        printf("%d\n",  nilai_rama_tampan_pemberani[i]);
    }

    return 0;
}