// GO Program to print the ascii code for each letter in the
// alphabet
package main

import "fmt"

func main() {
	var str = "abcdefghijklmnopqrstuvwxyz"
	for _, c := range str {
		fmt.Println(c)
	}
}
