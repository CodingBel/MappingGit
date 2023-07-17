#include <iostream>

int adder (int a, int b){
    return a + b + 1; 
}

int Subtractor (int a, int b){
<<<<<<< .merge_file_sFwxvH
    return a - b -1; 
=======
    return a - b + 1; 
>>>>>>> .merge_file_0eetxr
} 

int Multiplier (int a, int b){
    return a * b; 
}

int Divider (int a, int b) {
    return a / b;     
}

int main () {
    std::cout << "Yoww what a beautiful Monday" << std::endl; 
    std::cout << "This is the second line of code" << std::endl; 
    std::cout << "This is the third line of code " << std::endl; 

    return 0; 
}