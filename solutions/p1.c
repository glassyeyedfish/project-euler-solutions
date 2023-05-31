#include <stdio.h>
#include <stdbool.h>

bool is_multiple_of(int n, int k) {
    if (n % k == 0) {
        return true;
    }
    return false;
}

int main() {
    int result = 0;

    int i;

    for (i = 1; i < 1000; i++) {
        if (is_multiple_of(i, 3) || is_multiple_of(i, 5)) {
            result = result + i;
        }
    }

    printf("Result: %d\n", result);
    return 0;
}