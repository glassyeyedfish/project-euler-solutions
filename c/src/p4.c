#include <stdio.h>

int 
pwr(int b, int e) {
        int i;
        int n = 1;

        for (i = 0; i < e; i++) n *= b;

        return n;
}

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

char 
is_palindrome(int n) {
        int count = digit_count(n);
        int first_mod = 10;
        int last_mod = pwr(10, count);

        while (first_mod < last_mod) {
                if (
                        (n % first_mod) / (first_mod / 10) 
                        != (n % last_mod) / (last_mod / 10)
                ) {
                        return 0;
                }
                first_mod *= 10;
                last_mod /= 10;
        }

        return 1;
}

int
main(void) {
        int i, j;
        int max_palindrome_number = 0;

        for (i = 100; i <= 999; i++) {
                for (j = 100; j <= 999; j++) {
                        max_palindrome_number = is_palindrome(i * j) 
                                ? i * j 
                                : max_palindrome_number;
                }
        }

        printf("%d\n", max_palindrome_number);
        return 0;
}