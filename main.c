#include <stdio.h>

int main(void) {
    int i;
    int lunghezza;
    int j;
    printf("inserire lunghezza lato: ");
    scanf("%d", &lunghezza);
    for (i = 0; i < lunghezza; i++) {
        for( j=0; j<lunghezza; j++ ) {
            if (i == 0  || i == lunghezza-1 || j == 0 || j == lunghezza-1) {
                printf("* ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
}
