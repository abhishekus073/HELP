// GO Program to Calculate Area of Rectangle and Square.
package main

import "fmt"

var area int

func main() {
	var l, b int
	fmt.Println("Enter length of rectangle:")
	fmt.Scanln(&l)
	fmt.Println("Enter the bredth of rectangle:")
	fmt.Scanln(&b)
	area = l * b
	fmt.Println("Area of rectangle:", area)
	fmt.Println("Enter length of square:")
	fmt.Scanln(&l)
	area = l * l
	fmt.Println("Area of square:", area)
}
