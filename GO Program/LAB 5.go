//GO Program to get first and last element of slice in Golang.

package main

import "fmt"

func main() {
	intSlice := []int{1, 2, 3, 4, 5}
	fmt.Println("slice: ", intSlice)

	last := intSlice[len(intSlice)-1]
	fmt.Println("last element: ", last)

	first := intSlice[:1]
	fmt.Println("first element: ", first)

}
