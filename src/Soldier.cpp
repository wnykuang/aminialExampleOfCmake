#include "Soldier.h"

Soldier::Soldier(std::string name)
{
    this->name = name;
    this->_ptr_gun = nullptr;
}

Soldier::Soldier(std::string name, Gun *Gun)
{
    this->name = name;
    this->_ptr_gun = Gun;
}

void Soldier::addGun(Gun *gun)
{
    this->_ptr_gun = gun;
}

void Soldier::addBulletToGun(int num)
{
    this->_ptr_gun->fillBullet(num);
}

bool Soldier::fire(){
    return this -> _ptr_gun -> shoot();
}

Soldier::~Soldier()
{
    if (this -> _ptr_gun == nullptr){
        return;
    }
    delete this -> _ptr_gun;
    this -> _ptr_gun = nullptr;
}