// Complete Guide to C++ Programming Foundations
// Challenge 07_10
// Design a Person Class, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <utility>

class Person{
    // Write your code here
private:
    std::string name;
    float energy;
    float happiness; 
    float health;

public:
    Person(const std::string& name, float energy, float happiess, float health){
        this->name = name;
        this->energy = energy;
        this->happiness = happiness;
        this->health = health;
    }

    void Eat(float calories){
        this->energy += (calories*7.0/200);
        if (energy > 100) energy = 100;
    }

    void Play(float minutes){
        this->happiness += (minutes/2.0);
        this->energy -= (minutes/3.0);
        if (happiness > 100) happiness = 100;  // Cap happiness to 100
        if (energy < 0) energy = 0;  // Ensure energy doesn't go below 0
    }

    void Sleep(float hours){
        this->energy += (hours*3.75);
        this->health += (hours*2.5);
        if (energy > 100) energy = 100;  // Cap energy to 100
        if (health > 100) health = 100;  // Cap health to 100
    }

    float GetEnergy() const{
        return this->energy;
    }

    float GetHappiness() const{
        return this->happiness;
    }

    float GetHealth() const{
        return this->health;
    }
};

int main(){
    // Example 1
    std::string name = "Alice";
    float energy = 40;
    float happiness = 22;
    float health = 80;

    float calories = 300;
    float playMinutes = 120;
    float sleepHours = 5;

    Person sporty(name, energy, happiness, health);
    sporty.Eat(calories);
    sporty.Play(playMinutes);
    sporty.Sleep(sleepHours);

    std::cout << "Your code returned: { ";
    std::cout << "Energy: " << sporty.GetEnergy() << ", ";
    std::cout << "Happiness: " << sporty.GetHappiness() << ", ";
    std::cout << "Health: " << sporty.GetHealth() << " }" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}