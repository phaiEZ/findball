#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int a = 1, b = 0, c = 0, space, x, i, j, size;
char swap[100];


int check(int i, int o, int p) {
    if (i == 1) {
        return(1);
    }
    else if (o == 1) {
        return(2);
    }
    else if (p == 1) {
        return(3);
    }
}

int main() {
    scanf_s("%d", &x);
    for (j = 0; j < x; j++) {
        scanf_s("%s", swap);
        size = strlen(swap);
        for (i = 0; i < size; i++) {
            // printf("%c",swap[i]);
            if (swap[i] == 'A') {
                space = a;
                a = b;
                b = space;
            }
            else if (swap[i] == 'B') {
                space = b;
                b = c;
                c = space;

            }
            else if (swap[i] == 'C') {
                space = a;
                a = c;
                c = space;
            }
        }

        printf("%d", check(a, b, c));

        a = 1;
        b = 0;
        c = 0;
    }
    return(0);

}