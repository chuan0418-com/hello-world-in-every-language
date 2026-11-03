package main

import "fmt"

func helloWorld(action string){
	if action == "print" {
		fmt.Println("Hello, World!")
	}
}

func main(){
	helloWorld("print")
}