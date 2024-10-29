
#include "Triple_Pitagorico.h"
#include <stdio.h>
#include <math.h>

void CalcularPitagorico() {
    int a, b;
    double c;


    int max = 20;


    for (a = 1; a <= max; a++) {
        for (b = a; b <= max; b++) {

            c = sqrt(a * a + b * b);


            if (c == (int)c && a + b > c && a + c > b && b + c > a) {
                printf("Triple pitagórico encontrado: %d - %d - %d\n", a, b, (int)c);
            }
        }
    }

}
