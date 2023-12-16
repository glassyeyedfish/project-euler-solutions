package main 

import "fmt"

// Find the sum of the even Fibonacci numbers below four million.

func main() {
	sum := 0

	prev := 1
	curr := 2

	for curr < 4_000_000 {
		if curr % 2 == 0 {
			sum += curr
		}
		curr, prev = curr + prev, curr
	}

	fmt.Println(sum)
}
