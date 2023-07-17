#include <iostream>

int adder (int a, int b){
    return a + b; 
}

int Subtractor (int a, int b){
    return a - b; 
} 

int Multiplier (int a, int b){
    return a * b; 
}

int Divider (int a, int b) {
    return a / b;     
}

void doNothing (){
    std::cout << "A really useless Function" << std::endl; 
}

void actionTime() {
    std::cout << "Now is the time to apply all these to actions" << std::endl; 
}

int main () {
    std::cout << "Yoww what a beautiful Monday" << std::endl; 
    std::cout << "This is the second line of code" << std::endl; 
    std::cout << "This is the third line of code " << std::endl; 

    actionTime(); 
    std::cout << "Actions speak louder than words" << std::endl; 

    return 0; 
}