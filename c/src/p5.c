#include <stdio.h>

int
main(void) {
        int i = 20;

        while (1) {
                printf("%d ", i);
                char result_found = 1;
                for (int j = 1; j <= 20; j++) {
                        if (i % j != 0) {
                                result_found = 0;
                                printf(" at %d\n", j);
                                break;
                        } 
                }
                if (result_found) {
                        break;
                }
                i += 20;
        }

        printf("%d\n", i);
        return 0;
}