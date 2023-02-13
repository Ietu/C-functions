#include <stdio.h>

void charReplace(char *str, char c1, char c2) {
    int i;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == c1) {
            str[i] = c2;
        }
    }
}