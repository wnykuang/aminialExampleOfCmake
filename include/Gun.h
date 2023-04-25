#pragma once
#include <string>

class Gun
{
    public:
        Gun(std::string type){
            this -> type = type;
            this -> bulletCount = 0;
        }
        
        void fillBullet(int count);
        bool shoot();

    private:
        int bulletCount;
        std::string type;
};