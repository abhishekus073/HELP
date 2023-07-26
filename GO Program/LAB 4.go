//GO Program to find the index of first occurrence of a substring.

package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "the cat in the hat"
	i := strings.Index(str, "hat")
	fmt.Println(i)
}
