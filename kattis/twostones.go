/*input
5
*/
package main

import(
	"fmt"
)

func main(){
	var a int
	fmt.Scan(&a)
	if a % 2 == 0 {
		fmt.Println("Bob")
	}else{
		fmt.Println("Alice")
	}
}