//
// Created by iulli on 07/05/25.
//
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    int n[1000];
    int a = 0;
    for(int i=0;i<1000;i++) {
        n[i]=a;
        if (a < t-1) {
            a++;
        }
        else if (a == t-1) {
            a = 0;;
        }
        printf("N[%d] = %d\n",i, n[i]);
    }
    return 0;
}