#include <stdio.h>
#include <string.h>

int charCount(const char *str, char c) {
    int count = 0;
    int i;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}