#pragma once

#include <string>
#include <Gun.h>

class Soldier
{
public:
    Soldier(std::string name);
    Soldier(std::string name, Gun *gun);
    ~Soldier();
    void addGun(Gun *Gun);
    void addBulletToGun(int num);
    bool fire();

private:
    std::string name;
    Gun *_ptr_gun;
};