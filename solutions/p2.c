#include <stdio.h>
#include <stdbool.h>

bool is_even(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

/*
 * The strategy here is simple brute force.
 */

int main() {
    int result = 0;

    int previous_fibonacci_number = 1;
    int current_fibonacci_number = 1;
    int next_fibonacci_number = 1 + 1;

    while (current_fibonacci_number <= 4000000) {
        if (is_even(current_fibonacci_number)) {
            result += current_fibonacci_number;
        }

        previous_fibonacci_number = current_fibonacci_number;
        current_fibonacci_number = next_fibonacci_number;
        next_fibonacci_number = previous_fibonacci_number + current_fibonacci_number;
    }

    printf("Result: %d\n", result);
    return 0;
}
