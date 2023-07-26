// GO program with example of Array Reverse Sort Functions for
// integer and strings
package main

import (
	"fmt"
	"sort"
)

func main() {
	fmt.Println("Integer reverse sort")
	num := []int{50, 40, 60, 9, 80}
	sort.Sort(sort.Reverse(sort.IntSlice(num)))
	fmt.Println(num)

	fmt.Println()

	fmt.Println("Strings reverse sort")
	text := []string{"Japan", "UK", "Germeny", "Australia", "NewYork"}
	sort.Sort(sort.Reverse(sort.StringSlice(text)))
	fmt.Println(text)
}
