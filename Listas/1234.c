//
// Created by iulli on 22/05/25.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char string[50];
    while (fgets(string, 50, stdin) != NULL) {
        char *ptr = string;
        int m = 0;
        for (size_t len = strlen(string); ptr < string + len; ptr++) {
            if (isspace(*ptr) == 0) {
                if (m == 0) {
                    *ptr = toupper(*ptr);
                    m = 1;
                }
                else if (m == 1) {
                    *ptr = tolower(*ptr);
                    m = 0;
                }
            }
        }
        printf("%s", string);
    }
    return 0;
}
