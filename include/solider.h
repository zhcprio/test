#pragma once
#include "gun.h"
#include <memory>
class Solider
{
private:
    std::string soliderName;
    std::unique_ptr<Gun> myGun;

public:
    Solider(std::string _soliderName) : soliderName(_soliderName)
    {
        myGun = nullptr;
    }
    // ~Solider()
    // {
    //     delete myGun;
    // }
    void getGun(std::string gunName);
    void addBulletToGun(int);
    bool fire();
};