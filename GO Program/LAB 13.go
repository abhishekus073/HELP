// GO Program to Check Whether a Number is Palindrome or Not.
package main

import "fmt"

func main() {
	var number, remainder, temp int
	var reverse int = 0
	fmt.Println("Enter any positive integer:")
	fmt.Scanln(&number)
	temp = number
	for {
		remainder = number % 10
		reverse = reverse*10 + remainder
		number /= 10

		if number == 0 {
			break
		}
	}
	if temp == reverse {
		fmt.Printf("%d is a palindrome", temp)
	} else {
		fmt.Printf("%d is not a palindrome", temp)
	}
}
