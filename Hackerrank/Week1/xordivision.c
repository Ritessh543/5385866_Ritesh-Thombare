#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


char* strings_xor(char* s, char* t) {
    static char res[100]; // static to return safely
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == t[i])
            res[i] = '0';
        else
            res[i] = '1';
    }
    res[n] = '\0';
    return res;
}

int main() {
    char s[100], t[100];
    scanf("%s", s);
    scanf("%s", t);

    printf("%s\n", strings_xor(s, t));
    return 0;
}
