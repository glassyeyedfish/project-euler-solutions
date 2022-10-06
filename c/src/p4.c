#include <stdio.h>

int
digit_count(int n) {
        int i = 0;
        int j = 1;

        while (i < 1000) {
                if (n % (j = j * 10) == n) {
                        return i + 1;
                }
                i++;
        }

        return -1;
}

int
main(void) {
        printf("%d\n", digit_count(999));
        return 0;
}