// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>
//#define LEVEL_COUNT 4

int main(){
    const size_t LEVEL_COUNT = 4;
    int enemies[LEVEL_COUNT];
    float levelDifficulty[] = {1.0, 3.5, 6.0, 10.5};

    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;
    std::cout << "The game has " << LEVEL_COUNT << " levels:" << std::endl;
    for (int i =1; i<5 ; i++){
        std::cout << "Level " << i << ": " << enemies[i-1] << " enemies." << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Level difficulties are set as follows:" << std::endl;
    for (int i =1; i<5 ; i++){
        std::cout << "Level " << i << ": " << levelDifficulty[i-1] << std::endl;
    }

    std::cout << std::endl << std::endl;
    return 0;
}
