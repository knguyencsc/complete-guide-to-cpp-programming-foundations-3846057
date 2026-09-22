// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

//Take arguments by value
int square (int x){
    return x*x;
}

// Take arguments by address
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//Take arguments by reference
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    // TODO: square
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    swap(a,b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
