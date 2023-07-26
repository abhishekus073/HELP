// GO program for implementation of Linear Search.
package main

import "fmt"

func linearSearch(datalist []int, key int) bool {
	for _, item := range datalist {
		if item == key {
			return true
		}
	}
	return false
}
func main() {
	items := []int{95, 78, 56, 84, 25, 35, 15, 26}
	fmt.Println(linearSearch(items, 200))
}
