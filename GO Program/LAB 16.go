// GO Program to read file line by line to string.
package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
)

func main() {
	file, err := os.Open("kotlin.txt")
	if err != nil {
		log.Fatalf("failed opening file:%s", err)
	}
	scanner := bufio.NewScanner(file)
	scanner.Split(bufio.ScanLines)
	var txtlines []string
	for scanner.Scan() {
		txtlines = append(txtlines, scanner.Text())
	}
	file.Close()
	for _, eachline := range txtlines {
		fmt.Println(eachline)
	}
}
