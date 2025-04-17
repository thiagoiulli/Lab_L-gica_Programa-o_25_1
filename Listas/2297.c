//
// Created by iulli on 17/04/25.
//
#include <stdio.h>

int main(void) {
    int n, m = 1, totalH, totalZ;
    scanf("%d", &n);
    while (n != 0) {
        totalH = totalZ = 0;
        printf("Teste %d\n", m);
        for (int i = 0; i < n; i++) {
            int h, z;
            scanf("%d %d", &h, &z);
            totalH += h;
            totalZ += z;
        }
        if (totalH > totalZ) {
            printf("Aldo\n\n");
        }
        else {
            printf("Beto\n\n");
        }
        scanf("%d", &n);
        m++;
    }
    return 0;
}
