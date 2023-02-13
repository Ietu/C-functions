#include <stdio.h>
#include <ctype.h>

int atoi(const char *str) {
    int sign = 1, base = 0, i = 0;
    while (isspace(str[i])) { i++; }
    if (str[i] == '-' || str[i] == '+') {
        sign = 1 - 2 * (str[i++] == '-'); 
    }
    while (isdigit(str[i])) {
        base = 10 * base + (str[i++] - '0');
    }
    return base * sign;
}