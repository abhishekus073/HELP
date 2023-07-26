// GO Program to take user input and addition of two strings
package main

import "fmt"

func main() {
	fmt.Println("Enter first string:")
	var first string
	fmt.Scanln(&first)
	fmt.Println("Enter second string:")
	var second string
	fmt.Scanln(&second)
	fmt.Println(first + second)
}
