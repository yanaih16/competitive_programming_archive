package main

import (
	"fmt"
)

func main() {
	var a, b, c, x int
	var ans = 0
	fmt.Scanf("%d", &a)
	fmt.Scanf("%d", &b)
	fmt.Scanf("%d", &c)
	fmt.Scanf("%d", &x)
	for i := 0; i <= a; i++ {
		for j := 0; j <= b; j++ {
			for k := 0; k <= c; k++ {
				if 500*i+100*j+50*k == x {
					ans++
				}
			}
		}
	}
	fmt.Printf("%d\n", ans)
}
