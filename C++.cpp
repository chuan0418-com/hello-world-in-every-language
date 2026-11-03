#include <iostream>
#include <string_view>

void helloWorld(std::string_view action){
    std::cout << (action == "print" ? "Hello, World!\n" : "");
}

int main(){
    helloWorld("print");
}