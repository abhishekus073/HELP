// GO Program to Add Two Matrix Using Multi-dimensional Arrays.
package main

import "fmt"

func main() {
	var matrix1 [100][100]int
	var matrix2 [100][100]int
	var sum [100][100]int
	var row, col int
	fmt.Println("Enter number of rows:")
	fmt.Scanln(&row)
	fmt.Println("Enter number of cols:")
	fmt.Scanln(&col)
	fmt.Println()
	fmt.Println("==========matrix1==========")
	fmt.Println()
	for i := 0; i < row; i++ {
		for j := 0; j < col; j++ {
			fmt.Printf("Enter the element for matrix1 %d %d:", i+1, j+1)
			fmt.Scanln(&matrix1[i][j])
		}
	}
	fmt.Println()
	fmt.Println("==========matrix2==========")
	fmt.Println()
	for i := 0; i < row; i++ {
		for j := 0; j < col; j++ {
			fmt.Printf("Enter the element for matrix2 %d %d:", i+1, j+1)
			fmt.Scanln(&matrix2[i][j])
		}
	}
	for i := 0; i < row; i++ {
		for j := 0; j < col; j++ {
			sum[i][j] = matrix1[i][j] + matrix2[i][j]
		}
	}
	fmt.Println()
	fmt.Println("==========Sum of Marix==========")
	fmt.Println()
	for i := 0; i < row; i++ {
		for j := 0; j < col; j++ {
			fmt.Printf(" %d ", sum[i][j])
			if j == col-1 {
				fmt.Println("")
			}
		}
	}
}
