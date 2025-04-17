//
// Created by iulli on 17/04/25.
//
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x == 0) {
            printf("NULL\n");
        }
        else if (x % 2 == 0) {
            printf("EVEN ");
        }
        else if (x % 2 != 0) {
            printf("ODD ");
        }
        if (x < 0) {
            printf("NEGATIVE\n");
        }
        else if (x > 0) {
            printf("POSITIVE\n");
        }
    }
}
