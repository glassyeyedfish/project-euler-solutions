package main 

import "fmt"

// Find the sum of all multiples of 3 or 5 below 1000.

func main() {
	sum := 0

	for i := 3; i < 1000; i++ {
		if i % 3 == 0 || i % 5 == 0 {
			sum += i
		}
	}

	fmt.Println(sum)
}
