// GO Program to replace substrings in a string.
package main

import (
	"fmt"
	"strings"
)

func main() {
	str1 := "A cat is a cat is a cat is a cat"
	fmt.Println(str1)
	str2 := strings.Replace(str1, "cat", "dog", 1)
	fmt.Println(str2)
	str3 := strings.Replace(str1, "cat", "dog", 2)
	fmt.Println(str3)
	str4 := strings.Replace(str1, "cat", "dog", -1)
	fmt.Println(str4)
}
