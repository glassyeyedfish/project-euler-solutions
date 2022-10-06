#include <stdio.h>

#define bool char
#define true 1
#define false 0

bool
is_prime(long int n) {
        long int i;
        for (i = 2; i <= (n / 2) + 1; i++) {
                if (n % i == 0) {
                        return false;
                }
        }
        return true;
}

int 
main(void) {
        long int target = 600851475143;
        long int largest_prime_factor = 0;

        long int checking = 2;

        while (true) {
                if (is_prime(checking) && target % checking == 0) {
                        target = target / checking;
                }

                if (target == 1) {
                        largest_prime_factor = checking;
                        break;
                }

                checking++;
        }

        printf("%ld\n", largest_prime_factor);
        return 0;
}
