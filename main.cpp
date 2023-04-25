#include "Gun.h"
#include "Soldier.h"
#include <iostream>

void test()
{
    Soldier soldier("sanduo");
    soldier.addGun(new Gun("AK47"));
    soldier.addBulletToGun(34);
    soldier.fire();
}

int main()
{
    std::cout << "Test String" << std::endl;
    // int temp = 0;
    test();
    return 0;
}
