#include "Gun.h"
#include "iostream"

void Gun::fillBullet(int count){
    this -> bulletCount += count;
};

bool Gun::shoot(){
    if(this -> bulletCount == 0){
        std::cout << "No bullet!" << std::endl;
        return false;
    }

    this -> bulletCount -= 1;
    std::cout << "shoot!" << std::endl;
    std::cout << "left Bullet: " + std::to_string(this->bulletCount) << std::endl; 
    return true;
};