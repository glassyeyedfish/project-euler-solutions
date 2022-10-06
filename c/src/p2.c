#include <stdio.h>

int 
main(void) {
        int sum = 0;

        int current = 1;
        int next = 2;

        while (current < 4000000) {
                sum += current % 2 == 0 ? current : 0;
                next = current + next;
                current = next - current;
        }

        printf("%d\n", sum);
        return 0;
}
